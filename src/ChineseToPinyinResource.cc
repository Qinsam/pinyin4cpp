#include "ChineseToPinyinResource.h"
#include "pinyindb/unicode_to_hanyu_pinyin.h"

ChineseToPinyinResource* ChineseToPinyinResource::instance_ = NULL;

ChineseToPinyinResource::ChineseToPinyinResource() {
    initResource();
}

ChineseToPinyinResource::~ChineseToPinyinResource() {
    if(NULL != instance_) {
        delete instance_;
    }
}

ChineseToPinyinResource* ChineseToPinyinResource::getInstance() {
    if(NULL==instance_) {
        instance_ = new ChineseToPinyinResource();
    }
    return instance_;
}

void ChineseToPinyinResource::initResource() {
    string unicode_str,pinyin_str;
    ADD_ITEMS;
}

void ChineseToPinyinResource::addPinyinItem(const string &unicode,const string &pinyins) {
    vector<string> elements;
    util::StringUtil::splitString(pinyins,elements,",");
    if(elements.empty()) {
        return;
    }
    PinYinInfoPtr pinYinInfoPtr(new PinYinInfo());
    pinYinInfoPtr->unicode_ = unicode;
    for(size_t i=0;i<elements.size();i++) {
        PinYinElement pyEle;
        pyEle.pinyin_=util::StringUtil::utf8ToUnicode(elements[i].substr(0,elements[i].size()-1));
        pyEle.tone_ = util::StringUtil::utf8ToUnicode(elements[i].substr(elements[i].size()-1,1));
        pinYinInfoPtr->pinyinList_.push_back(pyEle);
    }
    unicodeToHanyuPinyinTable_[unicode]=pinYinInfoPtr;
}

const PinYinInfoPtr ChineseToPinyinResource::getHanyuPinyinInfoFromChar(wchar_t ch) {
    int codePointOfChar = ch;
    char buf[10]={0};
    sprintf(buf,"%02X",codePointOfChar);
    if(unicodeToHanyuPinyinTable_.find(buf) == unicodeToHanyuPinyinTable_.end()) {
        PinYinInfoPtr pyiPtr;
        return pyiPtr;
    }
    return unicodeToHanyuPinyinTable_[buf];
}

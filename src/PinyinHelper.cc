#include "PinyinHelper.h"
#include "PinyinFormatter.h"
#include "ChineseToPinyinResource.h"


string PinyinHelper::toHanYuPinyinString(const String &str,const HanyuPinyinOutputFormat &format) {
    for(size_t i=0;i<str.size();i++) {

    }
}

vector<string> PinyinHelper::toHanyuPinyinStringArray(const wchar_t &ch) {
    ChineseToPinyinResource *instance = ChineseToPinyinResource::getInstance();
    const PinYinInfoPtr pyiPtr = instance->getHanyuPinyinInfoFromChar(ch);
    vector<string> res;
    for(size_t i=0;i<pyiPtr->pinyinList_.size();i++) {
        res.push_back(pyiPtr->pinyinList_[i].pinyin_);
    }
    return res;
}

vector<string> PinyinHelper::toHanyuPinyinStringArray(const wchar_t &ch,const HanyuPinyinOutputFormat &format) {
    ChineseToPinyinResource *instance = ChineseToPinyinResource::getInstance();
    const PinYinInfoPtr pyiPtr = instance->getHanyuPinyinInfoFromChar(ch);
    vector<string> res;
    if(NULL==pyiPtr.get()) {
        return res;
    }
    for(size_t i=0;i<pyiPtr->pinyinList_.size();i++) {
        res.push_back(PinyinFormatter::formatHanyuPinyin(pyiPtr->pinyinList_[i].pinyin_,format));
    }
    return res;
}

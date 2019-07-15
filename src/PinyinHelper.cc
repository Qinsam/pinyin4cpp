#include "PinyinHelper.h"
#include "PinyinFormatter.h"
#include "ChineseToPinyinResource.h"


string PinyinHelper::toHanYuPinyinString(const string &str,const HanyuPinyinOutputFormat &format) {
    String request = util::StringUtil::utf8ToUnicode(str);
    ChineseToPinyinResource *instance = ChineseToPinyinResource::getInstance();
    String res;
    bool before_success=false;
    for(size_t i=0;i<request.size();i++) {
        if(0!=i && before_success) {
            res.push_back(L' ');
        }
        const PinYinInfoPtr pyiPtr = instance->getHanyuPinyinInfoFromChar(request[i]);
        if(NULL==pyiPtr.get() || pyiPtr->pinyinList_.size()==0) {
            res.push_back(request[i]);
            before_success=false;
            continue;
        }else {
            res+=pyiPtr->pinyinList_[0].pinyin_;
            before_success=true;
        }
    }
    return util::StringUtil::unicodeToUtf8(res);
}

vector<String> PinyinHelper::toHanyuPinyinStringArray(const wchar_t &ch) {
    ChineseToPinyinResource *instance = ChineseToPinyinResource::getInstance();
    const PinYinInfoPtr pyiPtr = instance->getHanyuPinyinInfoFromChar(ch);
    vector<String> res;
    if(NULL==pyiPtr.get()) {
        String s;
        s.push_back(ch);
        res.push_back(s);
        return res;
    }
    for(size_t i=0;i<pyiPtr->pinyinList_.size();i++) {
        res.push_back(pyiPtr->pinyinList_[i].pinyin_);
    }
    return res;
}

vector<String> PinyinHelper::toHanyuPinyinStringArray(const wchar_t &ch,const HanyuPinyinOutputFormat &format) {
    ChineseToPinyinResource *instance = ChineseToPinyinResource::getInstance();
    const PinYinInfoPtr pyiPtr = instance->getHanyuPinyinInfoFromChar(ch);
    vector<String> res;
    if(NULL==pyiPtr.get()) {
        return res;
    }
    for(size_t i=0;i<pyiPtr->pinyinList_.size();i++) {
        res.push_back(PinyinFormatter::formatHanyuPinyin(pyiPtr->pinyinList_[i].pinyin_,format));
    }
    return res;
}

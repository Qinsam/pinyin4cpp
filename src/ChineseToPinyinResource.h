#ifndef __CHINESETOPINYINRESOURCE_H_
#define __CHINESETOPINYINRESOURCE_H_

#include <iostream>
#include <vector>
#include <memory>
#include <unordered_map>
#include "const.h"

#define ADD_ITEM(unicode,args...) \
    unicode_str=#unicode; \
    pinyin_str = #args; \
    addPinyinItem(unicode_str,pinyin_str);


struct PinYinElement {
    string pinyin_;
    int tone_;  //音调
    PinYinElement() {
        pinyin_="";
        tone_=0;
    }
};

struct PinYinInfo {
    string unicode_;                  //unicode编码
    vector<PinYinElement> pinyinList_;  //对应拼音列表
    PinYinInfo() {
        unicode_="";
        pinyinList_.clear();
    }
};

typedef shared_ptr<PinYinInfo> PinYinInfoPtr;

class ChineseToPinyinResource {
public:
    ~ChineseToPinyinResource();
    static ChineseToPinyinResource *getInstance();
    const PinYinInfoPtr getHanyuPinyinInfoFromChar(wchar_t ch);
private:
    ChineseToPinyinResource();
    static ChineseToPinyinResource *instance_;
    unordered_map<string,PinYinInfoPtr> unicodeToHanyuPinyinTable_;
    void initResource();
    void addPinyinItem(const string &unicode,const string &pinyins);
};

#endif // __CHINESETOPINYINRESOURCE_H_

#ifndef __CHINESETOPINYINRESOURCE_H_
#define __CHINESETOPINYINRESOURCE_H_

#include <iostream>
#include <vector>
#include <memory>
#include <unordered_map>
#include "const.h"

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

private:
    ChineseToPinyinResource();
    static ChineseToPinyinResource *instance_;
    unordered_map<string,PinYinInfoPtr> unicodeToHanyuPinyinTable_;
    void initResource();
    bool isValidRecord(string recod);
    const PinYinInfoPtr getHanyuPinyinRecordFromChar(wchar_t ch);
};

#endif // __CHINESETOPINYINRESOURCE_H_

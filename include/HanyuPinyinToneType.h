#ifndef __HANYUPINYINTONETYPE_H_
#define __HANYUPINYINTONETYPE_H_

#include <string>

using namespace std;

class HanyuPinyinToneType {
public:
    static const HanyuPinyinToneType *WITH_TONE_NUMBER;
    static const HanyuPinyinToneType *WITHOUT_TONE;
    static const HanyuPinyinToneType *WITH_TONE_MARK;
    string getName();
    HanyuPinyinToneType(string name);
protected:
    string name_;
    void setName(string name);
};

#endif

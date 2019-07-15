#ifndef __HANYUPINYINVCHARTYPE_H_
#define __HANYUPINYINVCHARTYPE_H_

#include<string>
using namespace std;

class HanyuPinyinVCharType {
public:
    static const HanyuPinyinVCharType *WITH_U_AND_COLON;
    static const HanyuPinyinVCharType *WITH_V;
    static const HanyuPinyinVCharType *WITH_U_UNICODE;
    HanyuPinyinVCharType(string name);
    string getName();
protected:
    string name_;
    void setName(string name);
};

#endif

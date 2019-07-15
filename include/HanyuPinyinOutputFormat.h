#ifndef __HANYUPINYINOUTPUTFORMAT_H_
#define __HANYUPINYINOUTPUTFORMAT_H_

#include <iostream>
#include "HanyuPinyinCaseType.h"
#include "HanyuPinyinToneType.h"
#include "HanyuPinyinVCharType.h"

class HanyuPinyinOutputFormat {
public:
    HanyuPinyinOutputFormat();
    void restoreDefault();
    const HanyuPinyinCaseType *getCaseType() const;
    const HanyuPinyinToneType *getToneType() const;
    const HanyuPinyinVCharType *getVCharType() const;
    void setCaseType(const HanyuPinyinCaseType *caseType);
    void setToneType(const HanyuPinyinToneType *toneType);
    void setVCharType(const HanyuPinyinVCharType *vCharType);
private:
    const HanyuPinyinVCharType *vCharType_;
    const HanyuPinyinCaseType *caseType_;
    const HanyuPinyinToneType *toneType_;
};

#endif // __HANYUPINYINOUTPUTFORMAT_H_

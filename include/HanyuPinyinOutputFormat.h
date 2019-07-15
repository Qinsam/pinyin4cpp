#ifndef __HANYUPINYINOUTPUTFORMAT_H_
#define __HANYUPINYINOUTPUTFORMAT_H_

#include <iostream>
#include "HanyuPinyinCaseType.h"
#include "HanyuPinyinToneType.h"
#include "HanyuPinyinVCharType.h"
#include "HanyuPinyinSpellType.h"

class HanyuPinyinOutputFormat {
public:
    HanyuPinyinOutputFormat();
    void restoreDefault();
    const HanyuPinyinCaseType *getCaseType() const;
    const HanyuPinyinToneType *getToneType() const;
    const HanyuPinyinVCharType *getVCharType() const;
    const HanyuPinyinSpellType *getSpellType() const;
    void setCaseType(const HanyuPinyinCaseType *caseType);
    void setToneType(const HanyuPinyinToneType *toneType);
    void setVCharType(const HanyuPinyinVCharType *vCharType);
    void setSpellType(const HanyuPinyinSpellType *spellType);
private:
    const HanyuPinyinVCharType *vCharType_;
    const HanyuPinyinCaseType *caseType_;
    const HanyuPinyinToneType *toneType_;
    const HanyuPinyinSpellType *spellType_;
};

#endif // __HANYUPINYINOUTPUTFORMAT_H_

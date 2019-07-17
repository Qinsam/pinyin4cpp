#include "HanyuPinyinOutputFormat.h"

HanyuPinyinOutputFormat::HanyuPinyinOutputFormat() {
    restoreDefault();
}

void HanyuPinyinOutputFormat::restoreDefault() {
    setVCharType(HanyuPinyinVCharType::WITH_V);
    setCaseType(HanyuPinyinCaseType::LOWERCASE);
    setToneType(HanyuPinyinToneType::WITH_TONE_NUMBER);
    setSpellType(HanyuPinyinSpellType::FULL_LETTER);
}

const HanyuPinyinCaseType *HanyuPinyinOutputFormat::getCaseType() const{
    return caseType_;
}

void HanyuPinyinOutputFormat::setCaseType(const HanyuPinyinCaseType *caseType) {
    caseType_ = caseType;
}

const HanyuPinyinToneType *HanyuPinyinOutputFormat::getToneType() const{
    return toneType_;
}

void HanyuPinyinOutputFormat::setToneType(const HanyuPinyinToneType *toneType) {
    toneType_ = toneType;
}

const HanyuPinyinVCharType *HanyuPinyinOutputFormat::getVCharType() const{
    return vCharType_;
}

void HanyuPinyinOutputFormat::setVCharType(const HanyuPinyinVCharType *vCharType) {
    vCharType_ = vCharType;
}

const HanyuPinyinSpellType *HanyuPinyinOutputFormat::getSpellType() const {
    return spellType_;
}

void HanyuPinyinOutputFormat::setSpellType(const HanyuPinyinSpellType *spellType) {
    spellType_ = spellType;
}

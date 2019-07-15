#include "HanyuPinyinOutputFormat.h"

HanyuPinyinOutputFormat::HanyuPinyinOutputFormat() {
    restoreDefault();
}

void HanyuPinyinOutputFormat::restoreDefault() {
    setVCharType(HanyuPinyinVCharType::WITH_U_AND_COLON);
    setCaseType(HanyuPinyinCaseType::LOWERCASE);
    setToneType(HanyuPinyinToneType::WITH_TONE_NUMBER);
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

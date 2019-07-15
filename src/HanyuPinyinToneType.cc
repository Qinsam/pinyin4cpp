#include "HanyuPinyinToneType.h"

const HanyuPinyinToneType *HanyuPinyinToneType::WITH_TONE_NUMBER = new HanyuPinyinToneType("WITH_TONE_NUMBER");
const HanyuPinyinToneType *HanyuPinyinToneType::WITHOUT_TONE = new HanyuPinyinToneType("WITHOUT_TONE");
const HanyuPinyinToneType *HanyuPinyinToneType::WITH_TONE_MARK = new HanyuPinyinToneType("WITH_TONE_MARK");

HanyuPinyinToneType::HanyuPinyinToneType(string name) {
    setName(name);
}

void HanyuPinyinToneType::setName(string name) {
    name_ = name;
}

string HanyuPinyinToneType::getName() {
    return name_;
}

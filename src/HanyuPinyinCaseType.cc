#include "HanyuPinyinCaseType.h"

const HanyuPinyinCaseType *HanyuPinyinCaseType::UPPERCASE = new HanyuPinyinCaseType("UPPERCASE");
const HanyuPinyinCaseType *HanyuPinyinCaseType::LOWERCASE = new HanyuPinyinCaseType("LOWERCASE");

HanyuPinyinCaseType::HanyuPinyinCaseType(string name) {
    setName(name);
}

void HanyuPinyinCaseType::setName(string name) {
    name_ = name;
}

string HanyuPinyinCaseType::getName() {
    return name_;
}

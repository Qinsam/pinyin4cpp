#include "HanyuPinyinCaseType.h"

HanyuPinyinCaseType *UPPERCASE = new HanyuPinyinCaseType("UPPERCASE");
HanyuPinyinCaseType *LOWERCASE = new HanyuPinyinCaseType("LOWERCASE");

HanyuPinyinCaseType::HanyuPinyinCaseType(string name) {
    setName(name);
}

void HanyuPinyinCaseType::setName(string name) {
    name_ = name;
}

string HanyuPinyinCaseType::getName() {
    return name_;
}

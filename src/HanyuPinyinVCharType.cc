#include "HanyuPinyinVCharType.h"

const HanyuPinyinVCharType *HanyuPinyinVCharType::WITH_U_AND_COLON =  new HanyuPinyinVCharType("WITH_U_AND_COLON");
const HanyuPinyinVCharType *HanyuPinyinVCharType::WITH_V = new HanyuPinyinVCharType("WITH_V");
const HanyuPinyinVCharType *HanyuPinyinVCharType::WITH_U_UNICODE = new HanyuPinyinVCharType("WITH_U_UNICODE");

HanyuPinyinVCharType::HanyuPinyinVCharType(string name) {
    setName(name);
}

void HanyuPinyinVCharType::setName(string name) {
    name_ = name;
}

string HanyuPinyinVCharType::getName() {
    return name_;
}

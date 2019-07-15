#include "HanyuPinyinSpellType.h"

const HanyuPinyinSpellType* HanyuPinyinSpellType::FIRST_LETTER=new HanyuPinyinSpellType("FIRST_LETTER");
const HanyuPinyinSpellType* HanyuPinyinSpellType::FULL_LETTER=new HanyuPinyinSpellType("FULL_LETTER");

HanyuPinyinSpellType::HanyuPinyinSpellType(string name) {
    setName(name);
}

void HanyuPinyinSpellType::setName(string name) {
    name_ = name;
}

string HanyuPinyinSpellType::getName() {
    return name_;
}

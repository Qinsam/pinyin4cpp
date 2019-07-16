#include<iostream>
#include "ChineseToPinyinResource.h"
#include "PinyinHelper.h"
#include "HanyuPinyinOutputFormat.h"

using namespace std;

int main() {
//    PinYinInfoPtr pyiPtr = instance->getHanyuPinyinRecordFromChar(L'搞');
//    cout<<pyiPtr->unicode_<<" "<<pyiPtr->pinyinList_[0].pinyin_<<endl;
    string s;
    cin>>s;
    PinyinHelper ph;
    HanyuPinyinOutputFormat hpof;
    hpof.setCaseType(HanyuPinyinCaseType::UPPERCASE);
    hpof.setToneType(HanyuPinyinToneType::WITHOUT_TONE);
    hpof.setVCharType(HanyuPinyinVCharType::WITH_V);
    //hpof.setSpellType(HanyuPinyinSpellType::FIRST_LETTER);
    string res=ph.toHanYuPinyinString(s,hpof);
    cout<<res<<endl;
    return 0;
}

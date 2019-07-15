#include <algorithm>
#include <boost/algorithm/string.hpp>
#include "PinyinFormatter.h"

String PinyinFormatter::formatHanyuPinyin(const String &pinyinStr,const String &tone,const HanyuPinyinOutputFormat &outputFormat) {
    String res=L"";
    if(pinyinStr.size()==0) {
        return res;
    }
    if(HanyuPinyinToneType::WITH_TONE_MARK == outputFormat.getToneType() &&
       ((HanyuPinyinVCharType::WITH_V == outputFormat.getVCharType()) ||
        (HanyuPinyinVCharType::WITH_U_AND_COLON == outputFormat.getVCharType()))) {
       std::cerr<<"tone marks cannot be added to v or u:";
       return res;
    }
    if(HanyuPinyinSpellType::FIRST_LETTER == outputFormat.getSpellType()) {
        res.push_back(pinyinStr[0]);
    }else {
        if(HanyuPinyinToneType::WITH_TONE_NUMBER == outputFormat.getToneType()) {
            res=pinyinStr + tone;
        }else {
            res=pinyinStr;
        }
    }

    if(HanyuPinyinVCharType::WITH_V == outputFormat.getVCharType()) {
        boost::algorithm::replace_all(res,L"u:",L"ü");
    }

    if(HanyuPinyinCaseType::UPPERCASE == outputFormat.getCaseType()) {
        transform(res.begin(),res.end(),res.begin(),::toupper);
    }
    return res;
}

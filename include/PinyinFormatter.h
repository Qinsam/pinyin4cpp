#ifndef __PINYINFORMATTER_H_
#define __PINYINFORMATTER_H_

#include <string>
using namespace std;

#include "HanyuPinyinOutputFormat.h"
#include "string_util.h"

class PinyinFormatter {
public:
    static String formatHanyuPinyin(const String &pinyinStr,const HanyuPinyinOutputFormat &outputFormat);
};

#endif // __PINYINFORMATTER_H_

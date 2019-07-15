#ifndef __PINYINFORMATTER_H_
#define __PINYINFORMATTER_H_

#include <string>
using namespace std;

#include "HanyuPinyinOutputFormat.h"

class PinyinFormatter {
public:
    static string formatHanyuPinyin(const string &pinyinStr,const HanyuPinyinOutputFormat &outputFormat);
};

#endif // __PINYINFORMATTER_H_

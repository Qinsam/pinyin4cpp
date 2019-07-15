#ifndef __PINYINHELPER_H_
#define __PINYINHELPER_H_

#include <string>
#include <vector>
#include "const.h"
#include "HanyuPinyinOutputFormat.h"

using namespace std;

class PinyinHelper {
public:
    static vector<string> toHanyuPinyinStringArray(const wchar_t &ch);
    static vector<string> toHanyuPinyinStringArray(const wchar_t &ch,const HanyuPinyinOutputFormat &format);
    static string toHanYuPinyinString(const String &str,const HanyuPinyinOutputFormat &format);
};

#endif // __PINYINHELPER_H_

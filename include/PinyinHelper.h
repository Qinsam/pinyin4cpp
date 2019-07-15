#ifndef __PINYINHELPER_H_
#define __PINYINHELPER_H_

#include <string>
#include <vector>
#include "string_util.h"
#include "HanyuPinyinOutputFormat.h"

using namespace std;

class PinyinHelper {
public:
    static vector<String> toHanyuPinyinStringArray(const wchar_t &ch);
    static vector<String> toHanyuPinyinStringArray(const wchar_t &ch,const HanyuPinyinOutputFormat &format);
    static string toHanYuPinyinString(const string &str,const HanyuPinyinOutputFormat &format);
};

#endif // __PINYINHELPER_H_

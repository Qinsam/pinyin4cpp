#ifndef __CONST_H_
#define __CONST_H_

#include <string>
using namespace std;

typedef std::basic_string< wchar_t, std::char_traits<wchar_t> > String;

const string UNICODE_TO_PINYIN_FILE = "./pinyindb/unicode_to_hanyu_pinyin.txt";
const char LEFT_BRACKET='(';
const char RIGHT_BRACKET=')';
const char COMMA = ',';

#endif // __CONST_H_

#ifndef __HANYUPINYINCASETYPE_H_
#define __HANYUPINYINCASETYPE_H_

#include<string>
using namespace std;

class HanyuPinyinCaseType {
public:
    static const HanyuPinyinCaseType *UPPERCASE;
    static const HanyuPinyinCaseType *LOWERCASE;

    void setName(string name);
    string getName();
    HanyuPinyinCaseType(string name);
private:
    string name_;
};

#endif // __HANYUPINYINCASETYPE_H_

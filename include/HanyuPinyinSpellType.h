#ifndef __HANYUPINYINSPELLTYPE_H_
#define __HANYUPINYINSPELLTYPE_H_
/*author qinweiwei
 */
#include <string>
using namespace std;

class HanyuPinyinSpellType {
public:
    static const HanyuPinyinSpellType *FIRST_LETTER;
    static const HanyuPinyinSpellType *FULL_LETTER;
    HanyuPinyinSpellType(string name);
    string getName();
protected:
    string name_;
    void setName(string name);
};

#endif

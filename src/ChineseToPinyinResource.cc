#include "ChineseToPinyinResource.h"

ChineseToPinyinResource* ChineseToPinyinResource::instance_ = NULL;

ChineseToPinyinResource::ChineseToPinyinResource() {
    initResource();
}

ChineseToPinyinResource::~ChineseToPinyinResource() {
    if(NULL != instance_) {
        delete instance_;
    }
}

ChineseToPinyinResource* ChineseToPinyinResource::getInstance() {
    if(NULL==instance_) {
        instance_ = new ChineseToPinyinResource();
    }
    return instance_;
}

void ChineseToPinyinResource::initResource() {
    
}

bool ChineseToPinyinResource::isValidRecord(string record) {
    string noneStr = "(none0)";
    return (!record.empty() && record!=noneStr && record.front()==LEFT_BRACKET
            && record.back()==RIGHT_BRACKET);
}

const PinYinInfoPtr ChineseToPinyinResource::getHanyuPinyinRecordFromChar(wchar_t ch) {
    int codePointOfChar = ch;
    char buf[10]={0};
    sprintf(buf,"%02X",codePointOfChar);
    if(unicodeToHanyuPinyinTable_.find(buf) == unicodeToHanyuPinyinTable_.end()) {
        PinYinInfoPtr pyiPtr;
        return pyiPtr;
    }
    return unicodeToHanyuPinyinTable_[buf];
}

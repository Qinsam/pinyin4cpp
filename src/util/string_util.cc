// Copyright (c) 2010 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "util/string_util.h"

namespace util {

    void StringUtil::splitString(const std::string& s, std::vector<std::string>& v, const std::string& c) {
        std::string::size_type pos1, pos2;
        pos2 = s.find(c);
        pos1 = 0;
        while(std::string::npos != pos2)
        {
            v.push_back(s.substr(pos1, pos2-pos1));

            pos1 = pos2 + c.size();
            pos2 = s.find(c, pos1);
        }
        if(pos1 != s.length())
            v.push_back(s.substr(pos1));
    }

	String StringUtil::utf8ToUnicode(const std::string& str) {
    	return utf_to_utf<wchar_t>(str.c_str(), str.c_str() + str.size());
	}

	std::string StringUtil::unicodeToUtf8(String& str) {
    	return utf_to_utf<char>(str.c_str(), str.c_str() + str.size());
	}

    String StringUtil::replaceAll(const String &source,const wchar_t &oldChar,const wchar_t &newChar) {
        String res;
        res.reserve(source.size());
        for(size_t i=0;i<=source.size();i++) {
            if(oldChar == source[i]) {
                res[i]=newChar;
            } else {
                res[i]=source[i];
            }
        }
        res.shrink_to_fit();
        return res;
    }
}  // namespace util

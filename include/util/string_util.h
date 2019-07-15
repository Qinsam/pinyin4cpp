// Copyright (c) 2010 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef STRING_UTIL_H_
#define STRING_UTIL_H_

#include <string>
#include <utility>
#include <vector>
#include <boost/locale/encoding_utf.hpp>
using boost::locale::conv::utf_to_utf;

typedef std::basic_string< wchar_t, std::char_traits<wchar_t> > String;

namespace util {
    class StringUtil{
    public:
        static void splitString(const std::string& s, std::vector<std::string>& v, const std::string& c);
        static String utf8ToUnicode(const std::string& str);
        static std::string unicodeToUtf8(String& str);
        static String replaceAll(const String &source,const wchar_t &oldChar,const wchar_t &newChar);
    };
}
// namespace util

#endif  // UTIL_STRING_SPLIT_H

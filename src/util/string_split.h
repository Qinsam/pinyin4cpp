// Copyright (c) 2010 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UTIL_STRING_SPLIT_H_
#define UTIL_STRING_SPLIT_H_

#include <string>
#include <utility>
#include <vector>

namespace util {
    void SplitString(const std::string& s, std::vector<std::string>& v, const std::string& c);
}
// namespace util

#endif  // UTIL_STRING_SPLIT_H

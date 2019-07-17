bindir = $(prefix)/bin
includedir=$(prefix)/include
libdir = $(prefix)/lib

AUTOMAKE_OPTIONS=foreign
include_HEADERS=$(top_srcdir)/include/ChineseToPinyinResource.h \
			$(top_srcdir)/include/HanyuPinyinCaseType.h \
			$(top_srcdir)/include/HanyuPinyinOutputFormat.h \
			$(top_srcdir)/include/HanyuPinyinSpellType.h \
			$(top_srcdir)/include/HanyuPinyinToneType.h \
			$(top_srcdir)/include/HanyuPinyinVCharType.h \
			$(top_srcdir)/include/PinyinFormatter.h \
			$(top_srcdir)/include/PinyinHelper.h \
			$(top_srcdir)/include/util/string_util.h \
			$(top_srcdir)/src/pinyindb/unicode_to_hanyu_pinyin.h

libpinyin4cpp_so_CXXFLAGS=-O0 -fPIC -std=c++11 -fno-strict-aliasing -Wall -Wno-deprecated -Wno-sign-compare

noinst_HEADERS= $(top_srcdir)/include/ChineseToPinyinResource.h \
			$(top_srcdir)/include/HanyuPinyinCaseType.h \
			$(top_srcdir)/include/HanyuPinyinOutputFormat.h \
			$(top_srcdir)/include/HanyuPinyinSpellType.h \
			$(top_srcdir)/include/HanyuPinyinToneType.h \
			$(top_srcdir)/include/HanyuPinyinVCharType.h \
			$(top_srcdir)/include/PinyinFormatter.h \
			$(top_srcdir)/include/PinyinHelper.h \
			$(top_srcdir)/include/util/string_util.h \
			$(top_srcdir)/src/pinyindb/unicode_to_hanyu_pinyin.h

INCLUDES=-I$(top_srcdir)/include \
		-I$(top_srcdir)/include/util \
		-I$(top_srcdir)/src/pinyindb

libpinyin4cpplibdir=$(libdir)
libpinyin4cpplib_PROGRAMS=libpinyin4cpp.so
libpinyin4cpp_so_SOURCES=$(top_srcdir)/src/ChineseToPinyinResource.cc \
			$(top_srcdir)/src/HanyuPinyinCaseType.cc \
			$(top_srcdir)/src/HanyuPinyinOutputFormat.cc \
			$(top_srcdir)/src/HanyuPinyinSpellType.cc \
			$(top_srcdir)/src/HanyuPinyinToneType.cc \
			$(top_srcdir)/src/HanyuPinyinVCharType.cc \
			$(top_srcdir)/src/PinyinFormatter.cc \
			$(top_srcdir)/src/PinyinHelper.cc \
			$(top_srcdir)/src/util/string_util.cc

libpinyin4cpp_so_LDFLAGS=-shared -fPIC


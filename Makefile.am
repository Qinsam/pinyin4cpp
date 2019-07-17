bindir = $(prefix)/bin
includedir=$(prefix)/include
libdir = $(prefix)/lib

AUTOMAKE_OPTIONS=foreign
bin_PROGRAMS=test
test_SOURCES= $(top_srcdir)/src/ChineseToPinyinResource.cc \
			$(top_srcdir)/src/HanyuPinyinCaseType.cc \
			$(top_srcdir)/src/HanyuPinyinOutputFormat.cc \
			$(top_srcdir)/src/HanyuPinyinSpellType.cc \
			$(top_srcdir)/src/HanyuPinyinToneType.cc \
			$(top_srcdir)/src/HanyuPinyinVCharType.cc \
			$(top_srcdir)/src/PinyinFormatter.cc \
			$(top_srcdir)/src/PinyinHelper.cc \
			$(top_srcdir)/src/util/string_util.cc \
			$(top_srcdir)/src/test.cc

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

test_CXXFLAGS=-O0 -fPIC -std=c++11 -fno-strict-aliasing -Wall -Wno-deprecated -Wno-sign-compare
pinyin4cpp_so_CXXFLAGS=-O0 -fPIC -std=c++11 -fno-strict-aliasing -Wall -Wno-deprecated -Wno-sign-compare

test_LDFLAGS=-lboost_chrono \
      -lboost_system \
      -lboost_thread \
      -lboost_locale

test_LDADD=-L/usr/local/lib \
      -L/usr/local/lib64/ \
      -L/usr/lib64/

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
		-I$(top_srcdir)/src \
		-I$(top_srcdir)/src/pinyindb

pinyin4cpplibdir=$(libdir)
pinyin4cpplib_PROGRAMS=pinyin4cpp.so
pinyin4cpp_so_SOURCES=$(top_srcdir)/src/ChineseToPinyinResource.cc \
			$(top_srcdir)/src/HanyuPinyinCaseType.cc \
			$(top_srcdir)/src/HanyuPinyinOutputFormat.cc \
			$(top_srcdir)/src/HanyuPinyinSpellType.cc \
			$(top_srcdir)/src/HanyuPinyinToneType.cc \
			$(top_srcdir)/src/HanyuPinyinVCharType.cc \
			$(top_srcdir)/src/PinyinFormatter.cc \
			$(top_srcdir)/src/PinyinHelper.cc \
			$(top_srcdir)/src/util/string_util.cc

pinyin4cpp_so_LDFLAGS=-shared -fPIC


bindir = $(prefix)/bin

AUTOMAKE_OPTIONS=foreign
bin_PROGRAMS=test
test_SOURCES= $(top_srcdir)/demo/test.cc


test_CXXFLAGS=-O0 -fPIC -std=c++11 -fno-strict-aliasing -Wall -Wno-deprecated -Wno-sign-compare

test_LDFLAGS=-lboost_chrono \
      -lboost_system \
      -lboost_thread \
      -lboost_locale \
      -lpinyin4cpp

test_LDADD=-L/usr/local/lib \
      -L/usr/local/lib64/ \
      -L/usr/lib64/ \
      -L$(top_srcdir)/src

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

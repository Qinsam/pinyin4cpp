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


INCLUDES=-I$(top_srcdir)/include \
		-I$(top_srcdir)/include/util \
		-I$(top_srcdir)/src \
		-I$(top_srcdir)/src/pinyindb


SUBDIRS = src demo

# set CPUS for Linux or FreeBSD

TARGET=libtest.so
TARGET=test
PLATFORM := $(shell uname)
DIR_PATH := $(shell pwd)
PLATFORM_VERSION := $(shell uname -r| awk -F 'el' '{printf("el%d", substr($$2,1,1))}')
CPUS := $(strip $(if $(shell echo $(PLATFORM)|grep Linux),\
	$(shell cat /proc/cpuinfo|grep -c processor),\
	$(shell sysctl -a | egrep -i 'hw.ncpu' | cut -d: -f2)))

GCC472_PATH=/usr/local/gcc-4.7.2
CXX11 := env LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:$(GCC472_PATH)/lib:/usr/local/mpc/lib $(GCC472_PATH)/bin/g++
#CXX11=g++
CXXFLAGS := -g -O0 -std=c++11 -fno-strict-aliasing -Wall -Wno-deprecated -Wno-sign-compare -fPIC\
     -I../include \
     -I../include/util \
	 -I. \
	 -I /home/qinweiwei/qmodule/boost/include

 LDFLAGS := -pthread \
     -L/usr/local/lib \
     -L/usr/local/lib64/ \
     -L/usr/lib64/ \
	 -L/home/qinweiwei/qmodule/boost/lib

 LIBS := -lboost_chrono \
	 -lboost_system \
 	 -lboost_thread \
	 -lboost_locale

	 

SRC := 	$(wildcard *.cc) \
	    $(wildcard util/*.cc) \
	    $(wildcard util/unicode/*.cc)


OBJ := $(patsubst %.cc, %.o, $(SRC))
DEP := $(patsubst %.o, %.d, $(OBJ))


ifeq ($(USE_DEP),1)
-include $(DEP) $(GEN_DEP)
endif


all:
	$(MAKE) -j$(CPUS) USE_DEP=1 target

target: $(TARGET) $(BIN)

$(TARGET): $(OBJ)
	#$(CXX11) -std=c++11 $^ -Wl,-soname $(RTFLAGS) $(LDFLAGS) $(LIBS) -shared -o -fPIC -o $(TARGET) -Xlinker -unresolved-symbols=ignore-in-shared-libs
	$(CXX11) -std=c++11 $^ -Wl,-soname $(RTFLAGS) $(LDFLAGS) $(LIBS) -o $(TARGET) -Xlinker -unresolved-symbols=ignore-in-shared-libs

%.o : %.cc
	$(CXX11) -std=c++11 -c $(CXXFLAGS) $< -o $@
%.o : %.cpp
	$(CXX11) -std=c++11 -c $(CXXFLAGS) $< -o $@

%.d : %.cc
	@$(CXX11) -MM $< $(CXXFLAGS) | sed 's/$(notdir $*)\.o/$(subst /,\/,$*).o $(subst /,\/,$*).d/g' > $@
%.d : %.cpp
	@$(CXX11) -MM $< $(CXXFLAGS) | sed 's/$(notdir $*)\.o/$(subst /,\/,$*).o $(subst /,\/,$*).d/g' > $@

clean:
	-rm -rf gen-cpp $(OBJ) $(TARGET) *.pid *.log *.core $(DEP) $(GEN_DEP) *.so.* *.pb.cc *.pb.h *.o *.proto test

test:
	$(CXX11) -g $(SRC) $(CXXFLAGS) $(LDFLAGS) $(LIBS) -o $@

.PHONY: all target clean test

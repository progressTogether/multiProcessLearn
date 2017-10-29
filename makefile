SOURCE  := $(wildcard *.c) $(wildcard *.cpp)
OBJS    := $(patsubst %.c,%.o,$(patsubst %.cpp,%.o,$(SOURCE)))

TARGET = multiProcessTest cPrimerTest

TOP_PATH = $(shell pwd)
INCLUDE 	:= -I $(TOP_PATH)/myStrFunLib/include
LIBS_PATH	:= -L $(TOP_PATH)/myStrFunLib/lib
LIBS		:= -lMyStrFun

SHARE   := -shared  -o

GCC = gcc

DEFINE = -D DEFINE_BY_XIAOHUI

CFLAGS += $(DEFINE)

all:$(TARGET)
	@echo $(TARGET)
	export LD_LIBRARY_PATH="$(TOP_PATH)/myStrFunLib/lib"

multiProcessTest:fork_test.o
	$(GCC) -o multiProcessTest fork_test.o

#$(GCC) $(SOURCE) -lstraddleTest $(LIBS) $(CFLAGS) $@ $(INCLUDE)	
cPrimerTest:cPrimer.c cPrimer.h
	$(GCC) $(CFLAGS) cPrimer.c $(LIBS_PATH) $(LIBS) $(INCLUDE) -o cPrimerTest
	
fork_test.o:fork_test.c 
	$(GCC) $(CFLAGS) -c fork_test.c
	
clean :
	@rm -f *.o $(TARGET)
#gcc main.c -o multiProcessTest -lpthread

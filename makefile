SOURCE  := $(wildcard *.c) $(wildcard *.cpp)
OBJS    := $(patsubst %.c,%.o,$(patsubst %.cpp,%.o,$(SOURCE)))

TARGET = multiProcessTest cPrimerTest

GCC = gcc

DEFINE = -D DEFINE_BY_XIAOHUI

CFLAGS += $(DEFINE)

all:$(TARGET)
	@echo $(TARGET)

multiProcessTest:fork_test.o
	$(GCC) -o multiProcessTest fork_test.o
	
cPrimerTest:cPrimer.o
	$(GCC) -o cPrimerTest cPrimer.o

fork_test.o:fork_test.c
	$(GCC) $(CFLAGS) -c fork_test.c
	
cPrimer.o:cPrimer.c cPrimer.h
	$(GCC) $(CFLAGS) -c cPrimer.c
	
clean :
	@rm -f *.o $(TARGET)
#gcc main.c -o multiProcessTest -lpthread

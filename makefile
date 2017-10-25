SOURCE  := $(wildcard *.c) $(wildcard *.cpp)
OBJS    := $(patsubst %.c,%.o,$(patsubst %.cpp,%.o,$(SOURCE)))

TARGET = multiProcessTest cPrimerTest

GCC = gcc

CFLAGS  := -o 

all:$(TARGET)
	@echo $(TARGET)

multiProcessTest:fork_test.o
	$(GCC) $(CFLAGS) multiProcessTest fork_test.o
cPrimerTest:cPrimer.o
	$(GCC) $(CFLAGS) cPrimerTest cPrimer.o

fork_test.o:fork_test.c
	$(GCC) -c fork_test.c
cPrimer.o:cPrimer.c
	$(GCC) -c cPrimer.c
	
clean :
	@rm -f *.o $(TARGET)
#gcc main.c -o multiProcessTest -lpthread

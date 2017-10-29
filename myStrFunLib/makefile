SOURCE  := $(wildcard *.c) $(wildcard *.cpp)
OBJS    := $(patsubst %.c,%.o,$(patsubst %.cpp,%.o,$(SOURCE)))

TARGET = libMyStrFun.so

INCLUDE := -I ../include
LIBS    := 

SHARE   := -shared  -o

GCC = gcc

all:$(TARGET)
	@echo $(TARGET)
	
libMyStrFun.so:myStrLib.o
	$(GCC) -shared myStrLib.o -o libMyStrFun.so
	
myStrLib.o:myStrLib.c myStrLib.h
	$(GCC) $(CFLAGS) -c -fpic myStrLib.c
	
install:
	cp ./$(TARGET) ./lib/
	cp ./myStrLib.h ./include
	
clean:
	rm -f $(TARGET) ./lib/$(TARGET) *.o
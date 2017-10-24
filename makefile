SOURCE  := $(wildcard *.c) $(wildcard *.cpp)
OBJS    := $(patsubst %.c,%.o,$(patsubst %.cpp,%.o,$(SOURCE)))

TARGET = multiProcessTest

GCC = gcc

CFLAGS  := -o 

$(TARGET):$(OBJS)
	$(GCC) $(CFLAGS) $(TARGET) $(OBJS)
$(OBJS):$(SOURCE)
	$(GCC) -c $(SOURCE)	
clean :
	@rm -f *.o $(TARGET)
#gcc main.c -o multiProcessTest -lpthread

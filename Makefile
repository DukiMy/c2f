CC = gcc
CFLAGS = -Wall
TARGET = main

all: $(TARGET)

$(TARGET): main.o
	gcc $(CFLAGS) -o $(TARGET) main.o

main.o: main.c
	gcc $(CFLAGS) -c main.c

clean:
	del /Q *.o $(TARGET).exe 2>nul || echo Clean complete

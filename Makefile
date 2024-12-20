# Makefile for Prime Numbers Project

CC = gcc
CFLAGS = -Wall -Wextra -g
TARGET = prime_numbers

all: $(TARGET)

$(TARGET): main.c
	$(CC) $(CFLAGS) -o $(TARGET) main.c

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

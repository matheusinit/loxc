CC = gcc
CFLAGS = -Wall -Wextra -g -O2
TARGET = ./build/loxc
OBJS = main.o

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(wildcard *.c)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)

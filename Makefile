CC = gcc
TARGET = hello_world.c

SRC = $(TARGET)
OBJ = $(TARGET:.c=.o)

BUILD_DIR = build
EXEC = hello_world


all : $(BUILD_DIR)/$(EXEC)

%.o : %.c
	$(CC) -o $@ -c $<

$(BUILD_DIR)/$(EXEC) : $(OBJ)
	mkdir -p $(BUILD_DIR)
	$(CC) -o $@ $^

clean:
	rm -rf *.o
	rm -rf build
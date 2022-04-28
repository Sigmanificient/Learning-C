CC = gcc

SRC = hello_world.c
BUILD_DIR = build

OBJ = $(SRC:%.c=$(BUILD_DIR)/%.o)
EXEC = hello_world

# - lolcat suffix check -
COLOR := $(shell command -v lolcat)

ifeq (, $(COLOR))
	COLOR=
else
	COLOR= |lolcat
endif
# ----------------------
.SILENT:
all : $(EXEC)

$(BUILD_DIR)/%.o : %.c
	mkdir -p build
	$(CC) -o $@ -c $<

$(EXEC) : $(OBJ)
	$(CC) -o $@ $^

clean:
	echo "Cleaning" $(COLOR)
	rm -rf *.o
	rm -rf build
	rm -rf $(EXEC)

.PHONY: clean

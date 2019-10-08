# based on http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/

INC_DIR =./Inc
SRC_DIR = ./Src
CC=gcc
CFLAGS=-I$(INC_DIR)

BUILD_DIR=build
LIB_DIR =./Lib

LIBS=-lm

_DEPS = ll-func.h
DEPS = $(patsubst %,$(INC_DIR)/%,$(_DEPS))

_OBJ = ll-func.o ll-main.o 
OBJ = $(patsubst %,$(BUILD_DIR)/%,$(_OBJ))


$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

all : $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(BUILD_DIR)/*.o

CC = gcc
SRC = $(shell find src -name '*.c')  
OBJ = $(SRC:.c=.o)  
TARGET = pernambudex
CFLAGS = -lraylib -lGL -lm -lpthread -ldl -lrt -lX11  

$(TARGET): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

%.o: %.c
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

all: $(TARGET)

run: all
	clear
	./$(TARGET)
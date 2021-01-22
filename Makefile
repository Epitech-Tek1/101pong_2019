##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

CC		:= gcc
CFLAGS	:= -Wall -Wextra -g

BIN		:= 101pong
SRC		:= src/101pong.c
INCLUDE	:= include
LIB		:= lib

LIBRARIES	:= -lmy -L./lib/ -lm

CP		:= cp -f

ifeq ($(OS),Windows_NT)
EXECUTABLE	:= 101pong.exe
else
EXECUTABLE	:= 101pong
endif

all:	$(BIN)

$(BIN):	$(SRC)
	make -C lib/my/
	$(CC) -o $(BIN) $(SRC) $(CFLAGS) $(LIBRARIES)
	$(CP) $(BIN) bin/

clean:
	-$(RM) $(BIN)

run: all
	101pong

fclean: clean
	$(RM) bin/$(BIN)
	$(RM) *~

re: clean fclean all

.PHONY: all clean fclean re
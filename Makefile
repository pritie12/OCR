CC = gcc

ASAN_OPTIONS= -detect_leaks=0

CFLAGS = -Wall -Wextra -Werror -std=c99 -pedantic -fsanitize=address -g
LDFLAGS= -fsanitize=address
LDLIBS = `pkg-config gtk+-3.0 --libs sdl` -lSDL_image -lSDL_ttf -lm

SRC = main.c mysdl.c interface.c segmentation.c
OBJ = ${SRC:.c=.o}
DEP = ${SRC:.c=.d}

all : main
main : ${OBJ}
.PHONY: clean

clean:
	${RM} ${OBJ}
	${RM} ${DEP}
	${RM} main

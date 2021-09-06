CC= gcc
FLAGS= -Wall -Wextra -Werror

SRC= *.c
OBJ= ${SRC:.c=.o}
LIB= push_swap.a

all: ${LIB}

${LIB}: ${OBJ}
	#

${OBJ}:
	{CC} {FLAGS} *.c -o

clean:
	rm *.c
	rm *.o

fclean: clean
	rm ${LIB}

re: fclean all
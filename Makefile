CC= gcc
FLAGS= -Wall -Wextra -Werror

SRC= *.c
OBJ= $(SRC:.c=.o)
LIB= push_swap.a

all: ALT

$(LIB):
	Make -C ./sources/libft
	cp ./sources/libft/libft.a $(LIB)
	${CC} ${FLAGS} -c ./sources/*.c ./sources/libft/libft.a
	ar rc $(LIB) ./sources/*.o
	gcc  $(FLAGS) ./sources/push_swap.c ./sources/parse.c ./sources/fill_stack.c ./sources/error.c ./sources/libft/libft.a -L. -lpush_swap -o push_swap

ALT:
	gcc sources/parse.c sources/push_swap.c ./sources/fill_stack.c ./sources/error.c instructions/ra.c instructions/rb.c instructions/rra.c instructions/rrb.c instructions/pa.c instructions/pb.c sources/libft/libft.a

clean:
	rm ./push_swap.a
	rm ./sources/libft/*.o
	rm ./sources/*.o

fclean: clean
	rm ./sources/libft/libft.a
	rm ${LIB}

re: fclean all
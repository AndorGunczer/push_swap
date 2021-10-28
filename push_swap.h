#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include "./sources/libft/libft.h"
#include <stdio.h>
#define MAX_INT 2147483647
#define MIN_INT -2147483648
#define TRUE	1
#define	FALSE	0
#define INPUT_INVALID "Value given as parameter is invalid!"

typedef struct	s_stack{
	int	*a;
	int	*b;
	int	a_size;
	int	b_size;
} t_stack;

void	sa(int *stack_a);
void	sb(int *stack_b);
void	ss(int *stack_a, int *stack_b);
void	ra(int	stack_a[], int size_a);
void	rb(int	stack_b[], int size_b);
void	rr(int stack_a[], int stack_b[], int size_a, int size_b);
void	rra(int	stack_a[], int size_a);
void	rrb(int	stack_b[], int size_b);
void	rrr(int stack_a[], int stack_b[], int size_a, int size_b);
void	pa(int	*stack_a, int	*stack_b, int *size_a, int *size_b);
void	pb(int	*stack_a, int	*stack_b, int *size_a, int *size_b);

int		parse_input(int argc, char *argv[], t_list	*lst);
int		isint(char *argv);
int		isnumber(char *argv);
int		isdupe(char *argv, t_list *lst);

void	finish_error(char *msg);
void	finish_complete();

void	fill_stack(t_stack *stack, t_list *lst);
void	lst_to_stack_a(int *stack_a, int *i, t_list *lst);
void	stack_assignment(t_stack *stack, t_list *lst);
int		is_sorted(int *stack_a, int size_a);

int		main(int argc, char **argv);

#endif
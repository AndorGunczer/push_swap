#include "../push_swap.h"

static void	check_order_a(int	*stack_a, int size_a)
{
	int i;

	i = 0;
	printf("\nORDER BEGINN");
	while (i < size_a)
	{
		printf("\n%d :\t%d", i, stack_a[i]);
		i++;
	}
	printf("\nORDER END");
}

static void	check_order_b(int	*stack_b, int size_b)
{
	int i;

	i = 0;
	printf("\nORDER BEGINN");
	while (i < size_b)
	{
		printf("\n%d :\t%d", i, stack_b[i]);
		i++;
	}
	printf("\nORDER END");
}

// The above functions are only for testing purposes

int		main(int argc, char **argv)
{
	t_list	*lst;
	t_stack	*stack;

	lst = ft_lstnew(ft_atoi(argv[1]));
	stack = ft_calloc(sizeof(struct s_stack), 1);
	if (parse_input(argc, argv, lst) == 0)
		finish_error(INPUT_INVALID);
	else
	{
		stack_assignment(stack, lst);
		fill_stack(stack, lst);
		if (is_sorted(stack->a, stack->a_size) == TRUE)
			finish_complete();
		// ra(stack->a, stack->a_size);
		// pb(stack->a, stack->b, &stack->a_size, &stack->b_size);
		// check_order_a(stack->a, stack->a_size);
		// check_order_b(stack->b, stack->b_size);
	}
}
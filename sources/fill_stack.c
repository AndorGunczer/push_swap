#include "../push_swap.h"

static void	check_stack(t_stack *stack)
{
	int	i;

	i = 0;
	printf("\n Size of stack_a :\t%d", stack->a_size);
	while (i < stack->a_size)
	{
		printf("\n%d :\t%d", i, stack->a[i]);
		i++;
	}
}

// The above functions are only for testing purposes

int		is_sorted(int *stack_a, int size_a)
{
	int	i;

	i = 0;
	while (i < size_a - 1)
	{
		if (stack_a[i] > stack_a[i + 1])
			return (FALSE);
		i++;
	}
	return (TRUE);
}

void	stack_assignment(t_stack *stack, t_list *lst)
{
	int	max_size;

	max_size = ft_lstsize(lst);
	stack->a_size = max_size;
	stack->b_size = 0;
	stack->a = ft_calloc(sizeof(int), max_size);
	stack->b = ft_calloc(sizeof(int), max_size);
}

void	lst_to_stack_a(int *stack_a, int *i, t_list *lst)
{
	stack_a[*i] = lst->content;
	(*i)++;
}

void	fill_stack(t_stack *stack, t_list *lst)
{
	int	i;

	i = 0;;
	if (stack->a == NULL)
		finish_error("Problem during runtime");
	else
		ft_lstiter(lst, stack->a, &i, &lst_to_stack_a);
	check_stack(stack);
}

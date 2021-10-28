#include "../push_swap.h"

void	pb(int	*stack_a, int	*stack_b, int *size_a, int *size_b)
{
	if (*size_a > 0)
	{
		(*size_b)++;
		stack_b[*size_b - 1] = stack_a[0];
		rrb(stack_b, *size_b);
		ra(stack_a, *size_a);
		stack_a[*size_a - 1] = 0;
		(*size_a)--;
	}
}
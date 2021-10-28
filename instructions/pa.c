#include "../push_swap.h"

void	pa(int	*stack_a, int	*stack_b, int *size_a, int *size_b)
{
	if (*size_b > 0)
	{
		(*size_a)++;
		stack_a[*size_a - 1] = stack_b[0];
		rra(stack_a, *size_a);
		rb(stack_b, *size_b);
		stack_b[*size_b - 1] = 0;
		(*size_b)--;
	}
}

#include <stddef.h>
#include <stdio.h>

void	rrb(int	stack_b[], int size_b)
{
	int	i;
	int	last_num;

	i = size_b - 1;
	last_num = stack_b[i];
	while (i > 0)
	{
		stack_b[i] = stack_b[i - 1];
		i--;
	}
	stack_b[0] = last_num;
}
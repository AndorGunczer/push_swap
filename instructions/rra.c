#include <stddef.h>
#include <stdio.h>

void	rra(int	stack_a[], int size_a)
{
	int	i;
	int	last_num;

	i = size_a - 1;
	last_num = stack_a[i];
	while (i > 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[0] = last_num;
}
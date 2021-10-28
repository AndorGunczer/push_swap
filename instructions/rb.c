#include <stddef.h>
#include <stdio.h>

void	rb(int	stack_b[], int size_b)
{
	int	i;
	int	first_num;

	i = 0;
	first_num = stack_b[i];
	while (i < size_b)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	stack_b[size_b - 1] = first_num;
}
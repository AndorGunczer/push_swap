#include <stddef.h>
#include <stdio.h>

void	ra(int	stack_a[], int size_a)
{
	int	i;
	int	first_num;

	i = 0;
	first_num = stack_a[i];
	while (i < size_a)
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	stack_a[size_a - 1] = first_num;
}
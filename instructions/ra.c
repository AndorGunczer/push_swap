#include <stddef.h>
#include <stdio.h>

void	ra(int	stack_a[])
{
	int	i = 5;
	int	temp1;
	int	temp2 = stack_a[i];
	int odd_or_even;
	int arr_len = 5;

	while (stack_a[i - 1] != 0)
	{
		temp1 = stack_a[i - 1];
		stack_a[i - 1] = temp2;
		i--;
		odd_or_even = 0;
		if (stack_a[i - 1] != 0)
		{
			temp2 = stack_a[i - 1];
			stack_a[i - 1] = temp1;
			i--;
			odd_or_even = 1;
		}
	}

	if (odd_or_even == 1)
	{
		stack_a[arr_len] = temp2;
		stack_a[i] = temp1;
	}
	else
	{
		stack_a[arr_len] = temp1;
		stack_a[i] = temp2;
	}
}
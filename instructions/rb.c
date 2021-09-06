#include <stddef.h>
#include <stdio.h>

void	ra(int	stack_b[])
{
	int	i = 5;
	int	temp1;
	int	temp2 = stack_b[i];
	int odd_or_even;
	int arr_len = 5;

	while (stack_b[i - 1] != 0)
	{
		temp1 = stack_b[i - 1];
		stack_b[i - 1] = temp2;
		i--;
		odd_or_even = 0;
		if (stack_b[i - 1] != 0)
		{
			temp2 = stack_b[i - 1];
			stack_b[i - 1] = temp1;
			i--;
			odd_or_even = 1;
		}
	}

	if (odd_or_even == 1)
	{
		stack_b[arr_len] = temp2;
		stack_b[i] = temp1;
	}
	else
	{
		stack_b[arr_len] = temp1;
		stack_b[i] = temp2;
	}
}
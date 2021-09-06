#include <stddef.h>
#include <stdio.h>

void	rra(int	stack_a[])
{
	int	i = 0;
	int	temp1;
	int	temp2 = stack_a[0];
	int odd_or_even;

	while (stack_a[i + 1] != 0)
	{
		temp1 = stack_a[i + 1];
		stack_a[i + 1] = temp2;
		i++;
		odd_or_even = 0;
		if (stack_a[i + 1] != 0)
		{
			temp2 = stack_a[i + 1];
			stack_a[i + 1] = temp1;
			i++;
			odd_or_even = 1;
		}
	}

	if (odd_or_even == 1)
	{
		stack_a[0] = temp2;
		stack_a[i] = temp1;
	}
	else
	{
		stack_a[0] = temp1;
		stack_a[i] = temp2;
	}
}
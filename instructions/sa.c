void	sa(*stack_a)
{
	int	temp;

	if (stack_a[0] && stack_a[1])
	{
		temp = stack_a[1];
		stack_a[1] = stack_a[0];
		stack_a[0] = temp;
		// return ;
	}
}
void	sb(*stack_b)
{
	int	temp;

	if (stack_b[0] && stack_b[1])
	{
		temp = stack_b[1];
		stack_b[1] = stack_b[0];
		stack_b[0] = temp;
		// return ;
	}
}
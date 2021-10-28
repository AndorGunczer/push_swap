#include "../push_swap.h"

void	finish_error(char *msg)
{
	if (msg != NULL)
	{
		ft_putendl_fd(msg, 1);
		exit(1);
	}
	else
	{
		ft_putendl_fd("Something Went Wrong", 1);
		exit(1);
	}
}

void	finish_complete()
{
	printf("\nSORTED");
	exit(0);
}
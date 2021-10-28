#include "../push_swap.h"

int	isnumber(char *argv)
{
	int boolean;

	if (argv[0] == '-' || argv[0] == '+' || ft_isdigit(argv[0]) == 1)
		boolean = 1;
	else
		return (0);
	argv++;
	while (*argv != '\0')
	{
		boolean = ft_isdigit(*argv);
		if (boolean == 0)
			return (boolean);
		argv++;
	}
	return (boolean);
}

int	isint(char *argv)
{
	long long	num;

	num = ft_atoi(argv); // convert atoi to work with long long !! //
	if (num > MAX_INT || num < MIN_INT)
		return (0);
	return (1);
}

int	isdupe(char *argv, t_list *lst)
{
	int num;
	int	x = 1;

	num = ft_atoi(argv);
	while (x == 1 || (lst)->next != NULL)
	{
		if (lst->next == NULL)
			x = 0;
		if (lst->content != num)
		{
			if (lst->next != NULL)
				lst = (lst)->next;
		}
		else
			return (0);
	}
	ft_lstadd_back(&lst, ft_lstnew(num));
	return (1);
}

int	parse_input(int argc, char *argv[], t_list	*lst)
{
	int		i;
	int		num;

	i = 1;
	if (isnumber(argv[i]) == 1 && isint(argv[i]) == 1)
		i++;
	else
		return (0);
	while (i < argc)
	{
		if (isnumber(argv[i]) == 0)
			return (0);
		if (isint(argv[i]) == 0)
			return (0);
		if (isdupe(argv[i], lst) == 0)
			return (0);
		i++;
	}
	return (1);
}
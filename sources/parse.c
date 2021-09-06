int	isnumber(char *argv)
{
	int boolean;

	if (argv[0] == '-' || argv[0] == '+' || ft_isnumber(argv[0]) == 1)
		boolean = 1;
	else
		return (0);
	argv++;
	while (*argv != '/0')
	{
		boolean = ft_isnumber(*argv);
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
	if (num > int_MAX || num < int_MIN)
		return (0);
	return (1);
}

int	isdupe(char *argv)
{

}

int	parse_input(int argc, char *argv[])
{
	t_list lst;
	t_list *lst

	while (i < argc - 1)
	{
		if (isnumber(argv[i + 1]) == 0)
			return (0);
		if (isint(argv[i + 1]) == 0)
			return (0);
		
	}
}
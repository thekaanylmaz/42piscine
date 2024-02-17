int	ft_str_is_uppercase(char *str)
{
	int	y;

	y = 0;
	while (str[y] != '\0')
	{
		if (!(str[y] >= 'A' && str[y] <= 'Z'))
			return (0);
		y++;
	}
	return (1);
}

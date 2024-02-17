int	ft_str_is_numeric(char *str)
{
	int	y;

	y = 0;
	while (str[y] != '\0')
	{
		if (!(str[y] >= '0' && str[y] <= '9'))
			return (0);
		y++;
	}
	return (1);
}

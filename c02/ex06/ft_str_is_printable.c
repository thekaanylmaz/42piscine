int	ft_str_is_printable(char *str)
{
	int	y;

	y = 0;
	while (str[y] != '\0')
	{
		if (!(str[y] >= 32 && str [y] <= 126))
		{
			return (0);
		}
		y++;
	}
	return (1);
}

int	ft_str_is_alpha(char *str)
{
	int	y;

	y = 0;
	while (str[y] != '\0')
	{
		if (!(str[y] >= 'A' && str [y] <= 'Z')
			&& !(str [y] >= 'a' && str [y] <= 'z'))
			return (0);
		y++;
	}
	return (1);
}

char	*ft_strupcase(char *str)
{
	int	y;

	y = 0;
	while (str[y] != '\0')
	{
		if (str[y] >= 'a' && str[y] <= 'z')
		{
			str[y] -= 32;
		}
		y++;
	}
	return (str);
}

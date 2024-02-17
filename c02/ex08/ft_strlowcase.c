char	*ft_strlowcase(char *str)
{
	int	y;

	y = 0;
	while (str[y] != '\0')
	{
		if (str[y] >= 'A' && str[y] <= 'Z')
		{
			str[y] += 32;
		}
		y++;
	}
	return (str);
}

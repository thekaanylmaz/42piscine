int	ft_strlen(char *str)
{
	int	y;

	y = 0;
	while (str[y] != '\0')
		y++;
	return (y);
}

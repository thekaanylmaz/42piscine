int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	y;

	y = 0;
	if (n == 0)
		return (0);
	while (s1[y] == s2[y] && (s1[y] != '\0') && (s2[y] != '\0') && y < n - 1)
	{
		y++;
	}
	return (s1[y] - s2[y]);
}

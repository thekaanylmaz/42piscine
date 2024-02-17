int	ft_strlen(char *str)
{
	int	y;

	y = 0;
	while (str[y] != '\0')
	{
		y++;
	}
	return (y);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	k;
	unsigned int	j;

	k = 0;
	j = ft_strlen(src);
	if (size != 0)
	{
		while (src[k] != '\0' && k < size - 1)
		{
			dest[k] = src[k];
			k++;
		}
		dest[k] = '\0';
	}
	return (j);
}

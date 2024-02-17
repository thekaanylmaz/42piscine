char	*strlowcase(char *str)
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

char	*ft_strcapitalize(char *str)
{
	int	k;
	int	j;

	k = 0;
	j = 1;
	strlowcase(str);
	while (str[k] != '\0')
	{
		if (str[k] >= 'a' && str[k] <= 'z')
		{
			if (j == 1)
				str[k] -= 32;
			j = 0;
		}
		else if (str[k] >= '0' && str[k] <= '9')
			j = 0;
		else
			j = 1;
		k++;
	}
	return (str);
}

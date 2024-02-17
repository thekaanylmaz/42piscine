int	ft_iterative_power(int nb, int power)
{
	int	y;

	y = 1;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	while (power > 0)
	{
		y = y * nb;
		power--;
	}
	return (y);
}

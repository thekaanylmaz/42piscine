int	ft_iterative_factorial(int nb)
{
	int	y;

	y = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (0 < nb)
	{
		y *= nb;
		nb--;
	}
	return (y);
}

int	ft_recursive_factorial(int nb)
{
	int	y;

	y = 0;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		y = ft_recursive_factorial(nb -1) * nb;
	return (y);
}

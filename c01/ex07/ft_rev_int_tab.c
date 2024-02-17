void	ft_rev_int_tab(int *tab, int size)
{
	int	y;
	int	swp;

	y = 0;
	while (y < size)
	{
		swp = tab[size -1];
		tab[size -1] = tab[y];
		tab[y] = swp;
		y++;
		size--;
	}
}

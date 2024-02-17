void	ft_sort_int_tab(int *tab, int size)
{
	int	y;
	int	swp;

	while (size -1 != 0)
	{
		y = 0;
		while (y < size -1)
		{
			if (tab[y] > tab[y + 1])
			{
				swp = tab[y];
				tab[y] = tab[y + 1];
				tab[y + 1] = swp;
			}
			y++;
		}
		size--;
	}
}

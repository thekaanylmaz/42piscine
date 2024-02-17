#include <unistd.h>

void	ft_putchar(char k);

void	writeline(char start, char mid, char end, int len)
{
	int	i;

	i = 1;
	while (i <= len)
	{
		if (i == 1)
			ft_putchar(start);
		else if (i == len)
			ft_putchar(end);
		else
			ft_putchar(mid);
		i++;
	}
	ft_putchar('\n');
}

void	draw(int xlen, int ylen)
{
	int	j;

	j = 1;
	while (j <= ylen)
	{
		if (j == 1)
			writeline('/', '*', '\\', xlen);
		else if (j == ylen)
			writeline('\\', '*', '/', xlen);
		else
			writeline('*', ' ', '*', xlen);
		j++;
	}
}

void	rush(int xlen, int ylen)
{
	if (xlen <= 0 || ylen <= 0)
	{
		write(2, "ERROR\n", 6);
		return ;
	}
	draw(xlen, ylen);
}

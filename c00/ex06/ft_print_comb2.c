#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	y;
	int	k;

	y = 0;
	while (y <= 98)
	{
		k = y + 1;
		while (k <= 99)
		{
			ft_putchar(y / 10 + '0');
			ft_putchar(y % 10 + '0');
			ft_putchar(' ');
			ft_putchar(k / 10 + '0');
			ft_putchar(k % 10 + '0');
			if (y != 98)
				write(1, ", ", 2);
			k++;
		}
		y++;
	}
}

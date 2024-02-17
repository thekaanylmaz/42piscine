#include <unistd.h>

void	ft_print_comb(void)
{
	int	y;
	int	k;
	int	i;

	y = '0';
	while (y <= '7')
	{
		k = y + 1;
		while (k <= '8')
		{
			i = k + 1;
			while (i <= '9')
			{
				write (1, &y, 1);
				write (1, &k, 1);
				write (1, &i, 1);
				if (y != '7')
					write (1, ", ", 2);
				i++;
			}
			k++;
		}
		y++;
	}
}

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	y;

	y = 0;
	while (str[y] != '\0')
	{
		write(1, &str[y], 1);
		y++;
	}
}

#include <unistd.h>

void	ft_putchar(char k)
{
	write (1, &k, 1);
}

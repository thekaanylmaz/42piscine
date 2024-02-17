#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	k;

	k = 'z';
	while (k >= 'a')
	{
		write(1, &k, 1);
		k--;
	}
}

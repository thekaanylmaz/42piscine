#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_char_printable(char c)
{
	if (c >= 32)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int				y;
	unsigned char	k;

	y = 0;
	while (str[y] != '\0')
	{
		k = str[y];
		if (is_char_printable(k))
			ft_putchar(k);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[k / 16]);
			ft_putchar("0123456789abcdef"[k % 16]);
		}
		y++;
	}
}

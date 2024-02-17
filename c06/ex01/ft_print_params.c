#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	y;
	int	k;

	y = 0;
	k = 1;
	while (k < argc)
	{
		y = 0;
		while (argv[k][y] != '\0')
		{
			write(1, &(argv[k][y]), 1);
			y++;
		}
		write(1, "\n", 1);
		k++;
	}
	return (0);
}

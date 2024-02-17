#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	y;

	y = 0;
	while (argv[0][y] != '\0' && argc)
	{
		write(1, &(argv[0][y]), 1);
		y++;
	}
	write(1, "\n", 1);
	return (0);
}

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	len = max - min;
	*range = (int *)malloc(sizeof(int) * len);
	if (!*range)
		return (-1);
	while (min <= max)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (len);
}

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		size;
	int		*str;

	i = 0;
	if (min >= max)
		return (0);
	size = max - min;
	str = (int *)malloc(size * sizeof(int));
	if (str == 0)
		return (0);
	while (min < max)
	{
		str[i] = min;
		min++;
		i++;
	}
	return (str);
}

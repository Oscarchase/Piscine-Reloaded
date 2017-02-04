#include <stdlib.h>

int			*ft_range(int min, int max)
{
	int		i;
	int		*range;

	if (min >= max)
		return (NULL);
	i = 0;
	range = malloc(sizeof(*range) * (max - min));
	if (!range)
		return (NULL);
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

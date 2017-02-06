/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochase <ochase@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 15:03:50 by ochase            #+#    #+#             */
/*   Updated: 2017/02/06 15:03:51 by ochase           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

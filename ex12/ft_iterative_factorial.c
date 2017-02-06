/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochase <ochase@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 16:57:20 by ochase            #+#    #+#             */
/*   Updated: 2017/02/06 15:01:18 by ochase           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	else
	{
		result = 1;
		while (nb > 0)
		{
			result *= nb;
			nb--;
		}
	}
	return (result);
}

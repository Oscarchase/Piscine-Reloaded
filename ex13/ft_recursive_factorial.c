/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochase <ochase@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 16:57:20 by ochase            #+#    #+#             */
/*   Updated: 2017/02/06 14:39:42 by ochase           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	static int	result = 1;

	if (nb < 0)
		return (0);
	else
	{
		if (nb > 0)
		{
			result *= nb;
			return (ft_recursive_factorial(nb - 1));
		}
		else
			return (result);
	}
}

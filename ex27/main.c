/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochase <ochase@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 21:59:33 by ochase            #+#    #+#             */
/*   Updated: 2017/02/01 22:41:32 by ochase           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		if (ac == 2)
			display_file(av[1]);
		else
		{
			ft_putstr("Too many arguments.\n");
			return (0);
		}
	}
	else
		ft_putstr("File name missing.\n");
	return (0);
}

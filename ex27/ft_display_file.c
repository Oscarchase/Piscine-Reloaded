/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochase <ochase@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 22:07:31 by ochase            #+#    #+#             */
/*   Updated: 2017/02/01 22:48:15 by ochase           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void	display_file(char *file_name)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE];

	fd = open(file_name, O_RDONLY);
	while ((ret = read(fd, buf, BUF_SIZE - 1)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	close(fd);
}

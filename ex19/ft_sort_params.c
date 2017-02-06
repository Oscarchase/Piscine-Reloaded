/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochase <ochase@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 18:49:55 by ochase            #+#    #+#             */
/*   Updated: 2017/02/06 14:45:22 by ochase           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_putendl(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
	ft_putchar('\n');
}

int			ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}

void		ft_sort_params(int ac, char **av)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (i < ac)
	{
		j = 1;
		while (j < (ac - i - 1))
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
			{
				temp = av[j];
				av[j] = av[j + 1];
				av[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int			main(int ac, char **av)
{
	int		i;

	i = 0;
	if (ac > 1)
	{
		ft_sort_params(ac, av++);
		while (av[i])
			ft_putendl(av[i++]);
	}
	return (0);
}

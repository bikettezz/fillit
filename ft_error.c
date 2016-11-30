/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusylvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 22:07:02 by jusylvai          #+#    #+#             */
/*   Updated: 2016/11/28 22:07:02 by jusylvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_print_error(char *str)
{
	ft_putendl(str);
	exit(0);
}

void	ft_print_tab(char **tab)
{
	int i;
	int j;

	i = -1;
	while (tab[++i])
	{
		j = -1;
		while (tab[i][++j])
			ft_putchar(tab[i][j]);
	}
}

void	ft_check_error(char **tab, int read_size)
{
	int i;
	int j;
	int k;

	i = -1;
	k = 4;
	if (read_size > 546)
		ft_print_error("erreur taillle fi-chier");
	while (tab[++i])
	{
		j = -1;
		while (tab[i][++j])
		{
			if (i == k)
			{
				if (tab[i++][0] != '\n')
					ft_print_error("erreur pour separation tetris");
				k += 5;
			}
			if (tab[i][4] != '\n')
				ft_print_error("Erreur pour j = 4");
			if (tab[i][j] != '.' && tab[i][j] != '#' && j < 4)
				ft_print_error("erreur char");
		}
	}
}

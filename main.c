/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusylvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 22:25:40 by jusylvai          #+#    #+#             */
/*   Updated: 2016/11/26 22:25:45 by jusylvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_search_char(char *str, char c)
{
	int i;
	int count;

	i = -1;
	count = 0;
	while (str[++i])
		if (str[i] == c)
			count++;
	return (count);
}

char	**ft_make_table(char *buff)
{
	int	i;
	int	j;
	int k;
	int	line_count;
	char **tab;

	i = 0;
	k = 0;
	line_count = ft_search_char(buff, '\n');
	if((tab = (char **)malloc(sizeof(*tab) * line_count + 1)) == NULL)
		return(NULL);
	while(line_count != 0)
	{
		if((tab[i] = (char *)malloc(sizeof(**tab) * 6)) == NULL)
			return(NULL);
		j = 0;
		while(buff[k] != '\n')
			tab[i][j++] = buff[k++];
		tab[i][j++] = '\n';
		i++;
		k++;
		line_count--;
	}
	return(tab);
}

int		main(int argc, char **argv)
{
	t_fillit coffe;

	if (argc != 2)
		ft_print_error("fillit: Le nombre d'arguments a passer doit etre egal a 1");
	else
	{
		coffe.fd = open(argv[1], O_RDONLY);
		coffe.read_size = read(coffe.fd, coffe.buff, BUFF_SIZE);
		if (coffe.read_size == -1)
			ft_print_error(ERROR);
		coffe.buff[coffe.read_size] = '\0';
		coffe.tab = ft_make_table(coffe.buff);
		ft_check_error(coffe.tab, coffe.read_size);
		close(coffe.fd);
	}
	return (0);
}

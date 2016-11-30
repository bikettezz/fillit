/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusylvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 22:30:21 by jusylvai          #+#    #+#             */
/*   Updated: 2016/11/26 22:30:21 by jusylvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define ERROR "error"
# define BUFF_SIZE 666
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include "libft/libft.h"

typedef struct	s_fillit
{
	int 		fd;
	char 		buff[BUFF_SIZE + 1];
	char 		**tab;
	int	 		read_size;
}				t_fillit;

void			ft_print_error(char *str);
char			**ft_make_table(char *buff);
void			ft_check_error(char **tab, int read_size);
int				ft_search_char(char *str, char c);


#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusylvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 22:18:07 by jusylvai          #+#    #+#             */
/*   Updated: 2016/11/20 22:18:07 by jusylvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_word(const char *str, char c)
{
	int		count;
	int		bole;

	bole = 0;
	count = 0;
	while (*str != '\0')
	{
		if (bole == 1 && *str == c)
			bole = 0;
		if (bole == 0 && *str != c)
		{
			bole = 1;
			count++;
		}
		str++;
	}
	return (count);
}

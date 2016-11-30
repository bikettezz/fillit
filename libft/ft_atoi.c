/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusylvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 18:19:56 by jusylvai          #+#    #+#             */
/*   Updated: 2016/11/13 18:21:41 by jusylvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int bole;
	int result;

	i = 0;
	result = 0;
	if (!str[i])
		return (0);
	while (str[i] == '\v' || str[i] == '\t' || str[i] == '\f' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		bole = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		result = result * 10 + str[i++] - 48;
	if (bole == 1)
		return (-result);
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusylvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 18:12:02 by jusylvai          #+#    #+#             */
/*   Updated: 2016/11/13 18:16:46 by jusylvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*result;

	i = 0;
	result = malloc(sizeof(*result) * size + 1);
	if (result == NULL)
		return (NULL);
	while (i != size)
	{
		result[i] = '\0';
		i++;
	}
	result[i] = '\0';
	return (result);
}

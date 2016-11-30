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

char	**ft_strnew2d(size_t sized1, size_t sized2)
{
	size_t	i;
	size_t	j;
	char	**result;

	j = 0;
	result = malloc(sizeof(char *) * sized1 + 1);
	if (result == NULL)
		return (NULL);
	while (j != sized1)
	{
		result[j] = malloc(sizeof(char *) * sized2 + 1);
		if (result[j] == NULL)
			return (NULL);
		while(result[j][i])
			result[j][i++] = '\0';
		j++;
	}
	result[i] = '\0';
	return (result);
}

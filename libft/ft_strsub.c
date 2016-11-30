/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusylvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 18:11:34 by jusylvai          #+#    #+#             */
/*   Updated: 2016/11/13 18:11:37 by jusylvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*result;

	if (s)
	{
		if ((int)len < 0)
			return (NULL);
		s = s + start;
		i = 0;
		while (s[i] != '\0' && i != len)
			i++;
		result = malloc(sizeof(*result) * i + 1);
		if (result == NULL)
			return (NULL);
		i = 0;
		while (i != len)
		{
			result[i] = s[i];
			i++;
		}
		result[i] = '\0';
		return (result);
	}
	return (NULL);
}

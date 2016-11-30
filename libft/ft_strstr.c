/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusylvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 18:11:39 by jusylvai          #+#    #+#             */
/*   Updated: 2016/11/13 18:11:41 by jusylvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t		i;
	size_t		len1;
	size_t		len2;
	const char	*p1;
	const char	*p2;

	len1 = ft_strlen(big);
	len2 = ft_strlen(little);
	p1 = big;
	p2 = little;
	i = 0;
	if (big[0] == '\0' && little[0] == '\0')
		return (&((char*)p1)[i]);
	while (i < len1)
	{
		if (ft_memcmp(&p1[i], p2, len2) == 0)
			return (&((char*)p1)[i]);
		i++;
	}
	return (NULL);
}

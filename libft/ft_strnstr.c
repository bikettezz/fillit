/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusylvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 18:11:57 by jusylvai          #+#    #+#             */
/*   Updated: 2016/11/13 18:11:58 by jusylvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		lenbig;

	if (*little == '\0')
		return ((char*)big);
	lenbig = ft_strlen(little);
	while (*big != '\0' && len >= lenbig)
	{
		if (*big == *little && ft_memcmp(big, little, lenbig) == 0)
			return ((char*)big);
		big++;
		len--;
	}
	return (NULL);
}

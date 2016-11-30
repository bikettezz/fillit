/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusylvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 18:48:08 by jusylvai          #+#    #+#             */
/*   Updated: 2016/11/13 18:48:08 by jusylvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src,
					int c, size_t n)
{
	size_t	i;
	char	*dest;
	char	*src1;

	if (n == 0 || dst == src)
		return (NULL);
	i = 0;
	dest = (char*)dst;
	src1 = (char*)src;
	while (i < n)
	{
		dest[i] = src1[i];
		if (dest[i] == c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}

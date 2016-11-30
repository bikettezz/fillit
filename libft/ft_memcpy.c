/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusylvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 18:46:52 by jusylvai          #+#    #+#             */
/*   Updated: 2016/11/13 18:46:52 by jusylvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dest;
	char	*src1;

	i = 0;
	dest = (char*)dst;
	src1 = (char*)src;
	while (i < n)
	{
		dest[i] = src1[i];
		i++;
	}
	return (dest);
}

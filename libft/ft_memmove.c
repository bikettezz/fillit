/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusylvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 17:11:37 by jusylvai          #+#    #+#             */
/*   Updated: 2016/11/12 17:11:37 by jusylvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*src1;
	char		*dest;

	src1 = src;
	dest = dst;
	if (dest <= src1)
	{
		while (len != 0)
		{
			*dest++ = *src1++;
			len--;
		}
	}
	else
	{
		src1 = src1 + len - 1;
		dest = dest + len - 1;
		while (len != 0)
		{
			*dest-- = *src1--;
			len--;
		}
	}
	return (dst);
}

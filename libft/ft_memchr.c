/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusylvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 18:19:38 by jusylvai          #+#    #+#             */
/*   Updated: 2016/11/13 18:21:18 by jusylvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	cc;
	unsigned char	*str;

	i = 0;
	cc = (char)c;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == cc)
			return ((unsigned char*)str + i);
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusylvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 18:19:32 by jusylvai          #+#    #+#             */
/*   Updated: 2016/11/13 18:21:07 by jusylvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *result;

	if (len == 0)
		return (b);
	result = (unsigned char *)b;
	while (len != 0)
	{
		*result = (unsigned char)c;
		result++;
		len--;
	}
	return (b);
}

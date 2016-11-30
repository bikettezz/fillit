/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusylvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 18:19:46 by jusylvai          #+#    #+#             */
/*   Updated: 2016/11/13 18:21:21 by jusylvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_len(int n)
{
	int i;

	i = 1;
	n = n / 10;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char			*result;
	int				len;
	unsigned int	nb;

	len = ft_get_len(n);
	nb = n;
	if (n < 0)
	{
		nb = -n;
		len++;
	}
	result = ft_strnew(len);
	if (result == NULL)
		return (NULL);
	len--;
	result[len] = nb % 10 + 48;
	while (nb != 0)
	{
		nb = nb / 10;
		len--;
		result[len] = nb % 10 + 48;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}

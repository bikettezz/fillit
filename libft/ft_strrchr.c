/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusylvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 18:11:52 by jusylvai          #+#    #+#             */
/*   Updated: 2016/11/13 18:11:54 by jusylvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int slen;

	slen = ft_strlen((char*)s);
	while (slen != 0 && s[slen] != (char)c)
		slen--;
	if (s[slen] == (char)c)
		return ((char*)&s[slen]);
	return (NULL);
}

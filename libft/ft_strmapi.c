/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusylvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 18:18:26 by jusylvai          #+#    #+#             */
/*   Updated: 2016/11/13 18:18:56 by jusylvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	if (s && f)
	{
		i = 0;
		while (s[i])
			i++;
		result = malloc(sizeof(*result) * i + 1);
		if (result == NULL)
			return (NULL);
		i = 0;
		while (s[i] != '\0')
		{
			result[i] = f(i, (char)s[i]);
			i++;
		}
		result[i] = '\0';
		return (result);
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusylvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 18:11:46 by jusylvai          #+#    #+#             */
/*   Updated: 2016/11/13 18:11:50 by jusylvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	char	**result;
	int		nb_word;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	nb_word = ft_count_word(s, c);
	result = (char **)malloc(sizeof(*result) * nb_word + 1);
	if (result == NULL)
		return (NULL);
	while (nb_word--)
	{
		while (*s == c && *s != '\0')
			s++;
		result[i] = ft_strsub(s, 0, ft_word_len(s, c));
		if (result[i] == NULL)
			return (NULL);
		s = s + ft_word_len(s, c);
		i++;
	}
	result[i] = NULL;
	return (result);
}

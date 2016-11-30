/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusylvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 22:08:24 by jusylvai          #+#    #+#             */
/*   Updated: 2016/11/13 22:08:24 by jusylvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swapint(char *c1, char *c2)
{
	char swap1;
	char swap2;

	swap1 = *c1;
	swap2 = *c2;
	*c1 = swap2;
	*c2 = swap1;
}

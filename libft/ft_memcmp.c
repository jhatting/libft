/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 23:35:00 by shat              #+#    #+#             */
/*   Updated: 2019/09/12 14:07:20 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**compares the first n bytes of memory area str1 and memory area str2.
*/

int		ft_memcmp(const void *b1, const void *b2, size_t len)
{
	size_t			i;
	unsigned char	*a1;
	unsigned char	*a2;

	if (len == 0)
		return (0);
	i = 0;
	a1 = (unsigned char *)b1;
	a2 = (unsigned char *)b2;
	while (i + 1 < len && a1[i] == a2[i])
		i++;
	return (a1[i] - a2[i]);
}

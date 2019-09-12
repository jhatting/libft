/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 14:54:19 by shat              #+#    #+#             */
/*   Updated: 2019/09/12 13:49:29 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**searches for the first occurrence of the character c(unsigned char)
**in the first n bytes of the string pointed to by the argument str. 
*/

void	*ft_memchr(const void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*bee;

	i = 0;
	bee = (unsigned char *)b;
	while (i < len)
	{
		if (bee[i] == (unsigned char)c)
			return ((void *)(b + i));
		i++;
	}
	return (NULL);
}

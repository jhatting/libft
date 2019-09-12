/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 23:53:36 by shat              #+#    #+#             */
/*   Updated: 2019/09/12 13:36:42 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The ft_memccpy() function copies bytes from string src to string dst.
**If the character c (as converted to an unsigned char) occurs in the
**string src, the copy stops and a pointer to the byte after the copy
**of c in the string dst is returned. Otherwise, n bytes are copied and
**a null pointer is returned.
*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*sorc;

	i = 0;
	dest = (unsigned char *)dst;
	sorc = (unsigned char *)src;
	while (i < len)
	{
		dest[i] = sorc[i];
		if (sorc[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}

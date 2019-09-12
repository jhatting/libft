/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 13:27:09 by shat              #+#    #+#             */
/*   Updated: 2019/09/12 12:37:22 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies n bytes from memory area src to memory area dst.
** If dst and src overlap, behavior is undefined.
*/

void	*ft_memcpy(void *dst, void const *src, size_t n)
{
	char		*tmp_d;
	char const	*tmp_s;
	int			index;

	if (dst == src)
		return (dst);
	index = 0;
	tmp_d = (char *)dst;
	tmp_s = (char const *)src;
	while (n)
	{
		tmp_d[index] = tmp_s[index];
		n--;
		index++;
	}
	return (dst);
}

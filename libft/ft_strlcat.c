/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 15:16:07 by shat              #+#    #+#             */
/*   Updated: 2019/08/28 15:16:42 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = 0;
	while (dst[i])
		i++;
	while (src[len])
		len++;
	len += (dstsize <= i) ? dstsize : i;
	while (dstsize > 0 && i + j < dstsize - 1 && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	if (dstsize != 0)
		dst[i + j] = '\0';
	return (len);
}

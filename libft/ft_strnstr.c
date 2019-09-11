/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 23:27:14 by shat              #+#    #+#             */
/*   Updated: 2019/09/11 12:04:19 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**limits on the number of characters searched. So it peeks into
**the source string only n characters deep. limits how deep in
**to the “haystack” you search for a string.
**The ft_strnstr() function locates the first occurrence
**of the null-terminated string needle in the null-terminated
**string haystack, where not more than len characters
**are searched. Characters after the '\0' are not searched.
**If needle is an empty string, haystack is returned; if needle occurs
**nowhere in haystack, NULL is returned; otherwise a pointer to the first
**character of the first occurrence of needle is returned.*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)(haystack + i));
	while (i < len && haystack[i])
	{
		j = 0;
		while (i + j < len && needle[j] == haystack[i + j])
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}

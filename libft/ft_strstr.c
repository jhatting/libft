/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 14:30:32 by shat              #+#    #+#             */
/*   Updated: 2019/09/05 13:15:21 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strstr() function locates the first occurrence of
** the null-terminated string s2 in the null-terminated string s1.
** If s2 is an empty string, s1 is returned; if s2 occurs nowhere in s1,
** NULL is returned; otherwise a pointer to the first character
** of the first occurrence of s2 is returned.
*/

char	*ft_strstr(const char *s1, const char *s2)
{
	int i;
	int pos;
	int len;

	i = 0;
	pos = 0;
	len = 0;
	while (s2[len] != '\0')
		len++;
	if (len == 0)
		return ((char *)s1);
	while (s1[i])
	{
		while (s2[pos] == s1[i + pos])
		{
			if (pos == len - 1)
				return ((char *)s1 + i);
			pos++;
		}
		pos = 0;
		i++;
	}
	return (0);
}

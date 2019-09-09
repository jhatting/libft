/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 10:06:04 by shat              #+#    #+#             */
/*   Updated: 2019/09/09 15:17:05 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Compares the string pointed to, by str1 to the string pointed to by str2.
**The strcmp function returns a negative, zero or positive integer depending
**on whether the object pointer to by s1 is than, equal to, or greater than
**the object pointed to by s2.
**Str1 - This is the first string to be compared (an array to compare).
**Str2 - This is the second string to be compared (an array to compare).
*/

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

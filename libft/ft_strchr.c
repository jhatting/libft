/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 13:20:06 by shat              #+#    #+#             */
/*   Updated: 2019/09/10 15:46:16 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Searches the occurence of a specified character in the given
**string and returns the pointer to it.
**Str - The string in which the character is searched.
**Ch- The character that is searched in the string str.
**a string and we are searching a character ‘u’ in the
**string using strch() function.
*/

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = -1;
	while (++i < (int)ft_strlen(s) + 1)
		if (*(s + i) == (char)c)
			return ((char *)s + i);
	return (NULL);
}

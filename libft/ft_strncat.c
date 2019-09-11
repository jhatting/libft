/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 12:14:51 by shat              #+#    #+#             */
/*   Updated: 2019/09/11 10:30:01 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The ft_strncat() function appends a copy of the null-terminated
**string s2 to the end of the null-terminated string s1.
**The ft_strncat() function appends not more than n characters from s2,
**and then adds a terminating '\0'.
*/

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;

	i = ft_strlen(s1);
	while (n-- && (s1[i] = *s2++))
		i++;
	s1[i] = '\0';
	return (s1);
}

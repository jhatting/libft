/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 14:12:48 by shat              #+#    #+#             */
/*   Updated: 2019/09/09 15:42:10 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**is used to duplicate a string. It returns a pointer to null-terminated byte string
*/

char	*ft_strdup(const char *s1)
{
	char	*newstr;

	newstr = ((char *)malloc(sizeof(char) * (ft_strlen(s1) + 1)));
	if (newstr)
		return (ft_strcpy(newstr, s1));
	return (NULL);
}

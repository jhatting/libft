/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 14:12:48 by shat              #+#    #+#             */
/*   Updated: 2019/08/29 13:54:14 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*newstr;

	newstr = ((char *)malloc(sizeof(char) * (ft_strlen(s1) + 1)));
	if (newstr)
		return (ft_strcpy(newstr, s1));
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 12:21:56 by shat              #+#    #+#             */
/*   Updated: 2019/09/10 17:27:53 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Appends the string s2 to the end of the s1 in a new string str.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;

	if ((s1 != NULL && s2 != NULL) && \
	(str = (char *)malloc(sizeof(char) * (1 + ft_strlen(s1) + ft_strlen(s2)))))
	{
		i = 0;
		while (*s1)
		{
			str[i] = *s1;
			i++;
			s1++;
		}
		while (*s2)
		{
			str[i] = *s2;
			i++;
			s2++;
		}
		str[i] = '\0';
		return (str);
	}
	else
		return (NULL);
}

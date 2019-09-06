/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 12:16:16 by shat              #+#    #+#             */
/*   Updated: 2019/08/29 12:16:35 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if ((str = (char *)malloc(sizeof(char) * (len + 1))))
	{
		i = 0;
		while (i < len)
		{
			str[i] = s[start + i];
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	else
		return (NULL);
}

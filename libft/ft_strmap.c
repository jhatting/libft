/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 22:47:58 by shat              #+#    #+#             */
/*   Updated: 2019/09/10 16:26:02 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Apply the function f to each character of the parameter string,
** create a new string with the result, and return it.
*/

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	int		i;

	if (s == NULL || f == NULL || !(new = (char *)malloc(sizeof(char) \
	* (ft_strlen(s) + 1))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = f(s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

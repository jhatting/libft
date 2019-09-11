/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 22:54:08 by shat              #+#    #+#             */
/*   Updated: 2019/09/11 10:24:53 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The strlen() function compute the length of the string s
*/

size_t	ft_strlen(char const *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

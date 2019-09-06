/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 14:40:19 by shat              #+#    #+#             */
/*   Updated: 2019/09/05 13:01:13 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Takes a string(which represents an integer) as an
**and returns its value. It skips all the white-space
**characters as part of the numbers, and then stops when
**it encounter the first character that isn't a number.
*/

int	ft_atoi(const char *s)
{
	int		is_neg;
	int		n;

	is_neg = 0;
	n = 0;
	while (ft_isspace(*s))
		s++;
	if (*s == '+')
		s++;
	else if (*s == '-')
	{
		is_neg = 1;
		s++;
	}
	while (*s && ft_isdigit(*s))
		n = n * 10 + (*s++ - '0');
	return (is_neg ? -n : n);
}

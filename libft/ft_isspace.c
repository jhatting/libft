/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 22:50:43 by shat              #+#    #+#             */
/*   Updated: 2019/09/05 13:35:18 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**used to check if the argument contains any
**white-space characters.
**There are many types of whitespace characters
**‘ ‘ -space
**‘\t’ - horizontal tab
**‘\n’- newline
**‘\v’- vertical tab
**‘\f’- Feed
**‘\r’- Carriage return
*/

int		ft_isspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || \
		c == '\r')
		return (1);
	return (0);
}

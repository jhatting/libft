/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 15:04:15 by shat              #+#    #+#             */
/*   Updated: 2019/09/05 15:07:57 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**used to check if the argument contains any
**white-space characters.
**There are many types of whitespace characters
**‘ ‘ - space (isstrwhitespace)
**‘\t’ - horizontal tab (isstrwhitespace)
**‘\n’- newline (isstrwhitespace)
**‘\v’- vertical tab (ft_isotherwhitespace)
**‘\f’- Feed (ft_isotherwhitespace)
**‘\r’- Carriage return (ft_isotherwhitespace)
*/

int		ft_iswhitespace(char c)
{
	return (ft_isstrwhitespace(c) || ft_isotherwhitespace(c));
}

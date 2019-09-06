/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 21:49:01 by shat              #+#    #+#             */
/*   Updated: 2019/09/05 13:04:34 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**which must have the value that fits into
**the ascii character set. This function is
**a micro which returns non-zero when
**<[c]> is an ASCII character, and 0
**otherwise. It is defined for all integer
**values. You can use a compiled subroutine
**instead of the macro definition by undefi
**ning the macro using ‘<<#undef isascii>>’
*/

int		ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

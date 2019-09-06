/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isstrwhitespace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 15:00:06 by shat              #+#    #+#             */
/*   Updated: 2019/09/05 15:01:37 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**used to check if the argument contains specific
**white-space characters.
**‘ ‘ -space
**‘\t’ - horizontal tab
**‘\n’- newline
*/

int		ft_isstrwhitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

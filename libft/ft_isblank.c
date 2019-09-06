/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 13:35:35 by shat              #+#    #+#             */
/*   Updated: 2019/09/05 13:54:59 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**This code prints out the string character by character,
**replacing any blank character by a newline.considers
**blank characters the tab character (‘\t’) and the space
**character (‘ ‘).
*/

int	ft_isblank(int c)
{
	return (c == '\t' || c == ' ');
}

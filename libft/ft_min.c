/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 15:41:06 by shat              #+#    #+#             */
/*   Updated: 2019/09/10 15:41:19 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Custom function I added.
** Parameters: two size_t numbers
** Side effect: none (compares the two unsigned numbers)
** Return value: the smaller of a and b, b if they are equal
*/

#include "libft.h"

size_t	ft_min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}

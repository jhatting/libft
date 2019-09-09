/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 22:44:14 by shat              #+#    #+#             */
/*   Updated: 2019/09/09 16:04:43 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compare s1 and s2. If both strings are equal/identical, returns 0, else returns 1.
** The comparison is done lexicographically(alphabetically ordered).
**using conditional operators (condition ? exprIfTrue : exprIfFalse) for NULL:
*/

int		ft_strequ(char const *s1, char const *s2)
{
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((*s1 == *s2) ? 1 : 0);
}

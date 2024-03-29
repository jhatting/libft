/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 21:26:44 by shat              #+#    #+#             */
/*   Updated: 2019/09/09 13:32:35 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**writes the string s, and a terminating newline character,
**to the stream standard out.
*/

void	ft_putstr(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		write(1, &s[i++], 1);
}

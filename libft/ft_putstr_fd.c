/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 11:36:58 by shat              #+#    #+#             */
/*   Updated: 2019/09/09 13:47:06 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**writes the string s, and a terminating newline character,
**to the stream standard out.
**File descriptor is integer that uniquely
**identifies an open file of the process
*/

void	ft_putstr_fd(char const *s, int fd)
{
	(s) ? write(fd, s, ft_strlen(s)) : 0;
}

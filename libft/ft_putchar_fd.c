/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 11:27:02 by shat              #+#    #+#             */
/*   Updated: 2019/09/09 15:51:38 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Outputs a character or a word to a stream,
**File descriptor is integer that uniquely
**identifies an open file of the process
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

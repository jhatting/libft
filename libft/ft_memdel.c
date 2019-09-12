/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 00:06:58 by shat              #+#    #+#             */
/*   Updated: 2019/09/12 15:41:10 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**function takes the address of a memory area that needs to be freed
**with free(3), then puts the pointer to NULL.
*/

void	ft_memdel(void **ap)
{
	if (ap == NULL)
		return ;
	*ap = NULL;
	free(*ap);
}

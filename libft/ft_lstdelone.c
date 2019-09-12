/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 13:45:07 by shat              #+#    #+#             */
/*   Updated: 2019/09/12 15:37:14 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Takes as a parameter a link’s pointer address and frees the
**memory of the link’s content using the function del given as
**a parameter, then frees the link’s memory using free(3). The
**memory of next must not be freed under any circumstance.
**Finally, the pointer to the link that was just freed must be
**set to NULL (quite similar to the function ft_memdel in the
**mandatory part).
*/

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (alst == NULL || del == NULL)
		return ;
	del((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}

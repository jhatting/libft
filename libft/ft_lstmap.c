/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 13:26:18 by shat              #+#    #+#             */
/*   Updated: 2019/09/03 13:26:26 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*node;

	if (lst == NULL || f == NULL)
		return (NULL);
	if (!(node = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	node = f(lst);
	node->next = (lst->next) ? ft_lstmap(lst->next, f) : NULL;
	return (node);
}

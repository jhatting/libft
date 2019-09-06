/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 18:54:31 by shat              #+#    #+#             */
/*   Updated: 2019/09/03 18:54:37 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*node;

	if (!(node = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
		node->content = NULL;
	else
	{
		node->content = ft_memalloc(content_size);
		if (!content)
		{
			free(node);
			return (NULL);
		}
		ft_memcpy(node->content, content, content_size);
	}
	node->content_size = (content == NULL) ? 0 : content_size;
	node->next = NULL;
	return (node);
}

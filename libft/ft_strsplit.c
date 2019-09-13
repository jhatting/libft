/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 13:14:33 by shat              #+#    #+#             */
/*   Updated: 2019/09/12 22:36:15 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**allocates with malloc(3) and returns an array of fresh strings 
**(all ending with '\0' including the array itself) obtained by
**splitting s using the character c as a delimiter. If the allocation
**fails, the function returns NULL.
*/

char		**ft_strsplit(char const *s, char c)
{
	size_t	start;
	size_t	end;
	size_t	i;
	size_t	nb_words;
	char	**tab;

	nb_words = 0;
	tab = NULL;
	i = 0;
	if (s && ((tab = (char **)malloc(sizeof(*tab) * (ft_strlen(s) / 2 + 2)))))
	{
		while (i < ft_strlen(s))
		{
			while (s[i] == c && s[i])
				i++;
			start = i;
			while (s[i] != c && s[i])
				i++;
			end = i;
			if ((end - start) > 0)
				tab[nb_words++] = ft_strsub(s, start, end - start);
		}
		tab[nb_words] = 0;
	}
	return (tab);
}

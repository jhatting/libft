/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 13:14:33 by shat              #+#    #+#             */
/*   Updated: 2019/09/13 16:13:18 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_place_words cycles through the given strings characters
** avoiding the delimiting character and returning the word
** that will populater our new string
*/

static char		*ft_place_words(char const *s, char c, int *index)
{
	int		i;
	char	*word;
	int		start;

	i = 0;
	while (s[*index] == c && s[*index])
		(*index)++;
	start = *index;
	while (s[*index] != c && s[*index])
		(*index)++;
	if (!(word = ft_strnew(*index - start)))
		return (NULL);
	while (start < *index)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

/*
** ft_strsplit is going to return a 2D array with strings
** without their given delimiter character.
** First, we check for a given string and delimiter.
** Then, we check for letters that are not the delimiters
** Then we build the 2D array using those words
** and ft_place_words
*/

char			**ft_strsplit(char const *s, char c)
{
	char	**sentence;
	int		i;
	int		count;
	int		k;

	k = 0;
	count = 0;
	i = 0;
	if (!s || !c)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	i = 0;
	sentence = (char **)malloc((count + 1) * sizeof(char *));
	if (!sentence)
		return (NULL);
	while (i < count)
		sentence[i++] = ft_place_words(s, c, &k);
	sentence[i] = 0;
	return (sentence);
}

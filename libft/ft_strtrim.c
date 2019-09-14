/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 12:25:56 by shat              #+#    #+#             */
/*   Updated: 2019/09/13 16:11:53 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Function allocates with malloc(3) and returns
**a copy of the string given as argument without whitespaces at the
**beginning or at the end of the string. ' ', '\n' and '\t' are considered
**whitespace characters. If s has no whitespaces at the beginning or the
**end, the function returns a copy of s. If the allocation fails the
**function returns NULL.
*/

char	*ft_strtrim(char const *s)
{
	int		len;
	int		i;
	char	*str;

	if (s == NULL)
		return (NULL);
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	len = 0;
	while (s[len])
		len++;
	while (len > 0 \
	&& (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t'))
		len--;
	if ((str = (char *)malloc(sizeof(char) * len + 1)))
	{
		i = -1;
		while (++i < len)
			str[i] = s[i];
		str[i] = '\0';
		return (str);
	}
	else
		return (NULL);
}

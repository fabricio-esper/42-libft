/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 08:33:43 by fesper-s          #+#    #+#             */
/*   Updated: 2022/05/26 08:39:09 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] != 0)
	{
		if (s[i] != c && (s[i - 1] == c || i == 0))
			j++;
		i++;
	}
	return (j);
}

static size_t	ft_lencount(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != 0 && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;

	if (!s)
		return (0);
	str = malloc((ft_wordcount(s, c) + 1) * sizeof(char *));
	if (str == 0)
		return (0);
	i = 0;
	j = 0;
	while (s[i] != 0 && j < ft_wordcount(s, c))
	{
		while (s[i] == c)
			i++;
		str[j] = ft_substr(&s[i], 0, ft_lencount(&s[i], c));
		i += ft_lencount(&s[i], c);
		j++;
	}
	str[j] = 0;
	return (str);
}

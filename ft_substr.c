/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:01:58 by fesper-s          #+#    #+#             */
/*   Updated: 2022/05/18 10:36:45 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	len_s;
	int		i;

	len_s = ft_strlen(s);
	if (!s)
		return (0);
	if (start > len_s)
		return (ft_strdup(""));
	if (len_s - start >= len)
		substr = malloc((len + 1) * sizeof(char));
	else
		substr = malloc((len_s - start + 1) * sizeof(char));
	if (!substr)
		return (0);
	i = 0;
	while (start < len_s && len--)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = 0;
	return (substr);
}

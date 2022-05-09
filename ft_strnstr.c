/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 07:30:06 by fesper-s          #+#    #+#             */
/*   Updated: 2022/05/09 14:39:22 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == 0)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != 0 && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (needle[j] != 0)
				return ((char *) &haystack[i]);
			j++;
		}
		i++;
	}
	return (0);
}

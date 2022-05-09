/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:57:21 by fesper-s          #+#    #+#             */
/*   Updated: 2022/05/06 12:32:42 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i] != 0)
		i++;
	while (src[j] != 0 && j < dstsize - 1)
	{
		dst[j] = src[j];
		j++;
	}
	while (j < dstsize)
	{
		dst[j] = 0;
		j++;
	}
	return (i);
}

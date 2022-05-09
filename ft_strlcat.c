/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:45:19 by fesper-s          #+#    #+#             */
/*   Updated: 2022/05/09 10:08:15 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	init_dst;
	size_t	len_src;
	size_t	i;

	len_dst = 0;
	init_dst = 0;
	len_src = 0;
	i = 0;
	while (dst[len_dst] != 0)
	{
		len_dst++;
		init_dst++;
	}
	while (src[len_src] != 0)
		len_src++;
	while (len_dst + 1 < dstsize)
	{
		dst[len_dst] = src[i];
		len_dst++;
		i++;
	}
	dst[len_dst] = 0;
	if (dstsize > init_dst)
		return (init_dst + len_src);
	return (len_src + dstsize);
}

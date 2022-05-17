/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:57:21 by fesper-s          #+#    #+#             */
/*   Updated: 2022/05/17 13:06:55 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t			len_str;
	size_t			i;
	unsigned char	*str_src;

	i = 0;
	str_src = (unsigned char *) src;
	len_str = ft_strlen(src);
	if (dstsize == 0)
		return (len_str);
	while (str_src[i] != 0 && i < dstsize - 1)
	{
		dst[i] = str_src[i];
		i++;
	}
	dst[i] = 0;
	return (len_str);
}

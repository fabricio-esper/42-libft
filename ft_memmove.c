/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:48:32 by fesper-s          #+#    #+#             */
/*   Updated: 2022/05/19 08:13:36 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*str_dst;
	const char	*str_src;
	char		*temp;

	if (!dst && !src)
		return (0);
	str_dst = (char *) dst;
	str_src = (const char *) src;
	temp = ft_calloc(len, sizeof(char));
	i = 0;
	while (i < len)
	{
		temp[i] = str_src[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		str_dst[i] = temp[i];
		i++;
	}
	return (dst);
}

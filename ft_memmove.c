/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:48:32 by fesper-s          #+#    #+#             */
/*   Updated: 2022/05/09 09:42:10 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*str_dst;
	unsigned char	*str_src;
	char			temp[len];

	str_dst = (unsigned char *) dst;
	str_src = (unsigned char *) src;
	i = 0;
	while (i < len)
	{
		temp[i] = str_src[i];
		i++;
	}
	temp[i] = 0;
	i = 0;
	while (i < len)
	{
		str_dst[i] = temp[i];
		i++;
	}
	ft_bzero(temp, ft_strlen(temp)+1);
	return (str_dst);
}

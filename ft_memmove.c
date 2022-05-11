/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:48:32 by fesper-s          #+#    #+#             */
/*   Updated: 2022/05/11 08:03:22 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	char			*str_dst;
	const char		*str_src;
	char			*temp;

	str_dst = (char *) dst;
	str_src = (const char *) src;
	temp = malloc(len * sizeof(char));
	i = 0;
	while (i < len)
	{
		temp[i] = str_src[i];
		i++;
	}
	temp[i] = 0;
	i = 0;
	while (len > 0)
	{
		str_dst[i] = temp[i];
		len--;
		i++;
	}
	free(temp);
	return (str_dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:59:33 by fesper-s          #+#    #+#             */
/*   Updated: 2022/05/06 14:52:44 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	uc_c;
	unsigned char	*str_s;
	size_t			i;

	uc_c = (unsigned char) c;
	str_s = (unsigned char *) s;
	i = 0;
	while (str_s[i] != 0 && i < n)
	{
		if (uc_c == str_s[i])
			return (&str_s[i]);
		i++;
	}
	return (0);
}

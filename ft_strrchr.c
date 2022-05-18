/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:46:33 by fesper-s          #+#    #+#             */
/*   Updated: 2022/05/18 10:38:59 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*pst;

	pst = 0;
	if (c == 0)
		return ((char *) s + ft_strlen(s));
	if (!ft_isprint(c))
		return ((char *) s);
	while (*s != 0)
	{
		if (c == *s)
			pst = (char *) s;
		s++;
	}
	return (pst);
}

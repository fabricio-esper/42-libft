/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:46:33 by fesper-s          #+#    #+#             */
/*   Updated: 2022/05/25 14:59:40 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*final_pst;
	char	*str;
	char	find;

	str = (char *) s;
	find = (char) c;
	final_pst = 0;
	if (find == 0)
		return (str + ft_strlen(str));
	while (*str != 0)
	{
		if (find == *str)
			final_pst = str;
		str++;
	}
	return (final_pst);
}

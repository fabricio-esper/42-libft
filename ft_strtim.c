/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:18:24 by fesper-s          #+#    #+#             */
/*   Updated: 2022/05/12 11:41:11 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimstr;
	int		i;
	int		j;
	int		k;

	trimstr = malloc((ft_strlen(s1) - ft_strlen(set)) * sizeof(char));
	if (trimstr == 0)
		return (0);
	while (s1[i] != 0)
	{
		
		i++;
	}
	return (trimstr);
}

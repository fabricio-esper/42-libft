/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:53:28 by fesper-s          #+#    #+#             */
/*   Updated: 2022/05/12 09:33:30 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	len_s1;
	size_t	len_s2;
	int		i;
	int		j;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	new_str = malloc((len_s1 + len_s2) * sizeof(char));
	if (new_str == 0)
		return (0);
	i = 0;
	while (len_s1--)
	{
		new_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (len_s2--)
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}
	return (new_str);
}

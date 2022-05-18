/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:25:19 by fesper-s          #+#    #+#             */
/*   Updated: 2022/05/18 14:37:31 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <math.h>

char	*ft_itoa(int n)
{
	size_t	i;
	int		j;
	int		k;
	int		temp;
	char	*str;

	temp = n;
	i = 0;
	if (n < 0)
		i++;
	while (temp > 0)
	{
		temp = temp / 10;
		i++; 
	}
	str = malloc(i * sizeof(char));
	j = 0;
	if (n < 0)
	{
		str[j] = '-';
		n = n * -1;
		j++;
	}
	k = 1;
	while (i > 0)
	{
		str[j] = (n / pow(10, k)) + 48;
		j++;
		i--;
	}
	return (str);
}

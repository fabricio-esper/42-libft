/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 08:08:03 by fesper-s          #+#    #+#             */
/*   Updated: 2022/05/13 13:41:40 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	long	nb;
	long	temp;
	int		sign;
	int		i;

	nb = 0;
	temp = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
		if (str[i] == '-' || str[i] == '+')
			return (0);
	}
	while (ft_isdigit(str[i]))
	{
		temp = nb;
		nb = (nb * 10) + str[i] - 48;
		if (nb < temp)
		{
			if (sign > 0)
				return (-1);
			else if (sign < 0)
				return (0);
		}
		i++;
	}
	return (sign * nb);
}

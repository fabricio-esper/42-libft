/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 08:08:03 by fesper-s          #+#    #+#             */
/*   Updated: 2022/05/13 18:14:49 by fesper-s         ###   ########.fr       */
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

int	ft_atoi(const char *nptr)
{
	long	nbr;
	long	temp;
	int		sign;
	int		i;

	nbr = 0;
	temp = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
		if (nptr[i] == '-' || nptr[i] == '+')
			return (0);
	}
	while (ft_isdigit(nptr[i]))
	{
		temp = nbr;
		nbr = (nbr * 10) + nptr[i] - 48;
		if (nbr < temp && sign > 0)
			return (-1);
		else if (nbr < temp && sign < 0)
			return (0);
		i++;
	}
	return (sign * nbr);
}

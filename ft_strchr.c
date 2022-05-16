/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:49:33 by fesper-s          #+#    #+#             */
/*   Updated: 2022/05/16 10:18:06 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	find;
	int		i;

	str = (char *) s;
	find = (char) c;
	i = 0;
	while (*str != find)
	{
		if (*str == 0)
			return (0);
		str++;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:42:04 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/12/04 19:06:53 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	chack_nbr(unsigned long long nbr, int si, int leni, int count)
{
	if (count <= 20)
		return (nbr * si);
	else
	{
		if (leni >= 20 && si > 0)
			return (-1);
		if (leni >= 20 && si < 0)
			return (0);
		if (nbr > LONG_MAX && si > 0)
			return (-1);
		if (nbr > LONG_MAX && si < 0)
			return (0);
		return ((int)nbr * si);
	}
}

int	ft_atoi(const char *str)
{
	int					i;
	int					negat;
	int					count;
	unsigned long long	num;

	i = 0;
	negat = 1;
	count = 0;
	num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negat = -1;
		i++;
	}
	while (str[i] != '\0' && str[i] == 48)
		i++;
	while (str[i] >= 48 & str[i] <= 57)
	{
		num = num * 10 + str[i++] - 48;
		count++;
	}
	return (chack_nbr(num, negat, i, count));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:21:45 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/11 21:41:29 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	length_n(long nu)
{

	
	int	c;

	c = 0;
	if (nu == 0)
		return (1);
	if (nu < 0)
	{
		nu = -nu;
		c++;
	}
	while (nu > 0)
	{
		nu = nu / 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	int		sizen;
	char	*ml;
	long	nbr;

	nbr = n;
	sizen = length_n(nbr);
	ml = (char *)malloc(sizeof(char) * sizen + 1);
	if (!ml)
		return (0);
	ml[sizen] = '\0';
	if (nbr < 0)
	{
		ml[0] = '-';
		nbr *= -1;
	}
	if (nbr == 0)
		ml[0] = '0';
	while (nbr != 0)
	{
		ml[sizen - 1] = (nbr % 10) + 48;
		nbr = nbr / 10;
		sizen--;
	}
	return (ml);
}
/*
int main()
{
	int c = 0;
	printf("%s",ft_itoa(c));
}*/

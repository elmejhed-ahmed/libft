/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:21:45 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/07 20:44:29 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int length_n(int nu)
{
	int c;

	c = 0;
	if(nu == 0)
		return 1;
	if(nu < 0)
	{
		nu = -nu;
		c++;
	}
	while(nu > 0)
	{
		nu = nu / 10;
		c++;
	}
	return c;
}
char *ft_itoa(int n)
{
	int sizen;
	char *ml;

	sizen = length_n(n);
	ml = (char *)malloc(sizeof(char) * sizen + 1);
	if (!ml)
		return 0;
	ml[sizen] = '\0';
	if (n < 0)
	{
		ml[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		ml[sizen - 1] = (n % 10)+48;
		n = n / 10;
		sizen--;
	}
	return ml;
}/*
int main()
{
	int c = -125338;
	printf("%s",ft_itoa(c));
}*/

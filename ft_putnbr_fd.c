/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:34:42 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/19 13:47:39 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;

	nbr = n;
	if (fd > 0)
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			nbr = n * (-1);
		}
		if (nbr > 9)
		{
			ft_putnbr_fd(nbr / 10, fd);
			ft_putnbr_fd(nbr % 10, fd);
		}
		if (nbr >= 0 && nbr <= 9)
		{
			nbr += 48;
			ft_putchar_fd(nbr, fd);
		}
	}
}
/*
int main()
{
    int  i = -1025123;
    ft_putnbr_fd(i,1);
}*/

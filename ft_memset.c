/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:36:58 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/03 13:33:38 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;
	i = 0;
	unsigned char *ptr = (unsigned char *)b;
	while (i < len)
	{
		ptr[i] = c;
		i++;
	}

	return b;
}
/*
int main()
{
	int b = -254;
	int c = 1337;
	//int d = sizeof(c); 
	printf("%d",ft_memset(b,c,5));
	
}
*/

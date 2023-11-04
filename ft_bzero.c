/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:15:46 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/02 16:18:23 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *str, size_t n)
{
	size_t i;

	i = 0;
	char *ptr = (char *)str;

	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
/*
int main()
{
	char p[5];
	ft_bzero(p,5);
	for (int i = 0; i<5;i++)
		printf("%d",p[i]);

}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:15:46 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/26 13:53:33 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)str;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
// int main()
// {
// 	char d[5]={'5','r','8','e'};
// 	ft_bzero(d,5);
// 	for (int i = 0;i < 5;i++)
// 		printf("%c",d[i]);
// }
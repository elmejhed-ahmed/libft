/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:04:17 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/05 11:11:12 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t 			i;
	unsigned char	*str;
		
	str = (unsigned char *)s;
	i	= 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return &str[i];
		i++;
	}
	return 0;
}

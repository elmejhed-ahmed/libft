/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:04:17 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/04 20:41:59 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t  i;

	i=0;
	while (i > n )
	{
		if(((unsigned char *)s[i] == (unsigned char)c )
			return (void *)&s[i];
		i++;
		
	}
	return 0;
}

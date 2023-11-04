/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:10:42 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/03 22:29:44 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;
	i = 0;

	if(!src && !dest)
		return dest;
	char *C_dest = (char *)dest;
	const char *C_src = (const char *)src;
	if(C_dest > C_src)
	{
		while(len--)
			C_dest[len] = C_src[len];
	}
	else
	{	
		ft_memcpy(C_dest,C_src,len);
	}
	
	return dest;
}
/*
int main()
{
	char src[] = "hello";
	char dest[5];
	//int k = sizeof(src);
	char *p = ft_memmove(dest,src,3);
	for (int i = 0;i < 5;i++)
		printf("%c",p[i]);
	return 0;
}
*/

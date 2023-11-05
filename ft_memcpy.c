/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:50:41 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/03 21:16:57 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*ds;
	const char	*sr;

	i = 0;
	ds = (char *)dst;
	sr = (const char *)src;
	if (!src && !dst)
		return (dst);
	while (i < n)
	{
		ds[i] = sr[i];
		i++;
	}
	return (dst);
}
/*
int main()
{
	//int src[]= {44,79,998,897,3563362};
	//int dst[] = {55,33};
	//size_t p = sizeof(src);
	char c[] = "abhfuhf";
	char d[] = "defghijk";
	ft_memcpy(d,c,2);
	printf("%s",d);
	//for (int i = 0; i < 5; i++)
	//	printf("%c||",d[i]);
	return 0;
}
*/

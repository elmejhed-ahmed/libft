/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:50:41 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/30 16:07:34 by ael-mejh         ###   ########.fr       */
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
	if (ds == sr)
		return ((unsigned char *)src);
	while (i < n)
	{
		ds[i] = sr[i];
		i++;
	}
	return (dst);
}

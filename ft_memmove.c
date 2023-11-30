/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:10:42 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/30 16:31:12 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t		i;
	char		*cdest;
	const char	*csrc;

	i = 0;
	cdest = (char *)dest;
	csrc = (const char *)src;
	if (!src && !dest)
		return (dest);
	if (cdest > csrc)
	{
		while (len--)
			cdest[len] = csrc[len];
	}
	else
	{
		ft_memcpy(cdest, csrc, len);
	}
	return (dest);
}

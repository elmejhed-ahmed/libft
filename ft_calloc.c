/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:20:12 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/12/01 12:02:09 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*d;

	if ((int)count < 0 && (int)size < 0)
		return (0);
	if (count == 0 && size == 0)
	{
		count = 1;
		size = 1;
	}
	d = (char *)malloc(count * size);
	if (!d)
		return (0);
	else
		ft_bzero(d, count * size);
	return (d);
}

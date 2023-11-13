/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:20:12 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/04 17:53:35 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*d;

	d = (char *)malloc(count * size);
	if (!d)
		return (0);
	else
		ft_bzero(d, count * size);
	return (d);
}
/*
int main()
{
	int i = 5;
	int d = sizeof(int);
	printf("%s", ft_calloc(i,d));

}
*/

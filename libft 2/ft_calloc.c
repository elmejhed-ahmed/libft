/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:20:12 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/26 14:13:21 by ael-mejh         ###   ########.fr       */
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
int main()
{
	char i[9];
	char *str = ft_calloc(sizeof(i),sizeof(char));
	for (int d = 0; d < 9;d++)
		printf("%c",str[d]);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:36:58 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/26 17:48:25 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)b;
	while (i < len)
	{
		ptr[i] = c;
		i++;
	}
	return (b);
}
int main()
{
	int g[] = {122, 789, 5568, 989, 6656,0,5};
	int v = 1223;
	unsigned int i = 0;
	ft_memset((void *)&g[5] , 199, 1);
	ft_memset((void *)&g[5] + 1, 4, 1);
	printf("%d\n", v);
	while(i < sizeof(g) / sizeof(g[0]))
	{
		printf("%d\n", g[i]);
		i++;
	}
}
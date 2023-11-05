/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:33:05 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/03 15:53:57 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	k = 0;
	i = ft_strlen(dst);
	j = ft_strlen(src);
	if (i == j)
		return (i + j);
	while (src[k] != '\0' && k < dstsize)
	{
		dst[i + k] = src[k];
		k++;
	}
	dst[i + k] = '\0';
	return (i + j);
}
/*int main() {


    char src[]= "Hello ";
    char dst[]= "helll";

    printf("%zu",ft_strlcat(dst,src,5));

    return 0;
}*/

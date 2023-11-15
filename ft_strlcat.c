/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:33:05 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/15 16:19:42 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	res;

	k = 0;
	i = ft_strlen(dst);
	j = ft_strlen(src);
	if(i < dstsize)
		res= i + j;
	else if (dstsize > i)
		res = dstsize + j;
	if (dstsize == 0)
		return res;
	if (dstsize <= i)
		return (dstsize + j);
	while (src[k] != '\0' && (k + i < dstsize - 1))
	{
		dst[i + k] = src[k];
		k++;
	}
	dst[i + k] = '\0';
	return (res);
}
// int main() {
//     printf("%zu",ft_strlcat(NULL, "abc", 1));
//     return 0;
// }

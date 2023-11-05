/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 13:43:00 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/05 14:43:35 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		nlen;
	size_t		i;

	i = 0;
	nlen = ft_strlen(needle);
	if (needle[i] == '\0')
		return ((char *)&haystack[i]);
	while (len >= nlen && haystack[i] != '\0')
	{
		if (ft_strncmp(haystack, needle, nlen) == 0)
			return ((char *)&haystack[i]);
		i++;
		len--;
	}
	return (0);
}

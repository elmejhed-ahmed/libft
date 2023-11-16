/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 13:43:00 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/16 11:20:05 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		nlen;

	nlen = ft_strlen(needle);
	if (len == 0 && !needle && !haystack)
		return (0);
	if (*needle == '\0' || len == 0)
		return ((char *)haystack);
	while (*haystack != '\0' && nlen <= len)
	{
		if (ft_strncmp(haystack, needle, nlen) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

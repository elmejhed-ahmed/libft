/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:00:30 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/30 16:32:02 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ml;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen(s) || len == 0)
	{
		ml = ft_calloc(sizeof(char), 1);
		return (ml);
	}
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	ml = (char *)malloc(sizeof(char) * len + 1);
	if (!ml)
		return (ml);
	while (s[start] != '\0' && i < len)
	{
		ml[i] = s[start];
		i++;
		start++;
	}
	ml[i] = '\0';
	return (ml);
}
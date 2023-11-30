/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:58:25 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/30 16:38:00 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	char		*ml;

	i = 0;
	if (!s1 || !s2)
		return (0);
	ml = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ml)
		return (0);
	while (s1[i] != '\0' && i < ft_strlen(s1))
	{
		ml[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0' && i < ft_strlen(s2))
	{
		ml[i + ft_strlen(s1)] = s2[i];
		i++;
	}
	ml[ft_strlen(s1) + i] = '\0';
	return (ml);
}

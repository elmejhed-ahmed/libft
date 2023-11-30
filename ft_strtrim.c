/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:54:17 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/30 16:31:58 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		l;
	int		k;
	char	*ml;

	if (!s1 || !set)
		return (0);
	i = 0;
	l = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != 0)
		i++;
	while (j > i && ft_strchr(set, s1[j]) != 0)
		j--;
	k = j - i + 1;
	ml = (char *)malloc(sizeof(char) * k + 1);
	if (!ml)
		return (0);
	while (l < k)
		ml[l++] = s1[i++];
	ml[l] = '\0';
	return (ml);
}
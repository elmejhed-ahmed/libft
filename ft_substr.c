/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:00:30 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/07 15:41:21 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ml;
	size_t i;

	i = 0;

	ml = (char *)malloc(sizeof(char) * len+1);
	if (start >= ft_strlen(s) || len == 0)
	{
		ml[0] = '\0';
		return ml;
	}
	if(!ml)
		return 0;
	while(s[start] != '\0' && i < len)
	{
		ml[i] = s[start];
		i++;
		start++;
	}
	ml[i] = '\0';
	return ml;
}
/*
int main()
{
	char s[] = "Bonjour comment ca va?";
	printf("%s\n", ft_substr(s,5,8));
}*/

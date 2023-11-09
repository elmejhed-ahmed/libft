/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:00:30 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/09 20:41:14 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	char const  s[] = "Bonjour comment ca va?";
	unsigned int i = 5;
	size_t p = 8;
	printf("%s\n", ft_substr(s,i,p));
}*/

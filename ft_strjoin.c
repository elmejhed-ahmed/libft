/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:58:25 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/07 13:58:49 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		lens1;
	int		lens2;
	int		i;
	char	*ml;

	i = 0;
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	ml = (char *)malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (!ml)
		return (0);
	while (s1[i] != '\0' && i < lens1)
	{
		ml[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0' && i < lens2)
	{
		ml[i + lens1] = s2[i];
		i++;
	}
	ml[lens1 + i] = '\0';
	return (ml);
}
/*
int main()
{
	char *s1 = "admin ";
	char *s2 = "21admin ll,,,";
	char *src = ft_strjoin(s1,s2);
	printf("%s\n",src);	
}*/

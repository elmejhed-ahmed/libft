/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:54:18 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/04 20:20:44 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
	int i;
	char *des;
	i = 0;
	des = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if(!des)
		return 0;
	while(s1[i] !='\0')
	{
		des[i] = s1[i];
		i++;
	}
	des[i] = '\0';
	return des;
}

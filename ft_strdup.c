/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:54:18 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/04 19:10:55 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
	int i;
	char *d;
	int len;

	i = 0;
	len = ft_strlen(s1);
	d = (char *)malloc(sizeof(char) * len);
	if(!d)
		return 0;
	while(s1[i] !='\0')
	{
		d[i] = s1[i];
		i++;
	}
	//d[i] = '\0';
	return d;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:46:02 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/04 10:23:54 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int c)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] == c)
			return (char *)&str[i];
		i++;
	}
	return 0;
}
/*
int main()
{
	char s[]="aldkfght";
	char c = 'l';
	printf("%s",ft_strchr(s,c));
}
*/

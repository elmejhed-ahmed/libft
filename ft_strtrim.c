/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:54:17 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/08 11:38:53 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int	lens2;
	char *s2;
	int i;
	int j;
	char *ml;

	i = 0;
	while (s1[i] != '\0')
	{
		if(s1[i] == set[j])
		{
			j++;
		}
		else
		{
			s2[i] = s1[i];
			j = 0;
		}
		i++;
	}
	lens2  = ft_strlen(s2);
	ml = ()
}
int main()
{
	
}

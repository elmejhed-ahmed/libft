/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:35:20 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/10 12:15:19 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void f(unsigned int i, char *g)
{
        if(g[i] >= 97 && g[i] <= 122)
        {
            g[i] = g[i] - 32;
        }
        write(1,&g[i],1);
}
int main()
{
    //char s[] ="heefewfefeqwllo";
    char s[6] ={'s','p','u','r','s'};
    ft_striteri(s,&f);
}*/

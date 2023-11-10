/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:27:17 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/10 17:51:09 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int count_w(char coust *str, char ca)
{
    int pos;
    int i= 0;
    int count;
    count = 0;
    pos = 0;
    while (str[i])
    {
        if(pos == 0 && str[i] != c)
        {
            pos = 1;
            count ++;
            i++;
        }
        else if (str[i] == c))
        {
            pos = 0;
        }
        i++;
    }
}
char **ft_split(char const *s, char c)
{
    int i;
    le
    while (s[i] !='\0')
    {
        
    }
    
}
/*
#include <stdio.h>
int count_w(char  *str, char ca)
{
    int pos;
    int i= 0;
    int count;
    count = 0;
    pos = 0;
    while (str[i])
    {
        if(pos == 0 && str[i] != ca)
        {
            pos = 1;
            count ++;
        }
        else if (str[i] == ca)
        {
            pos = 0;
        }
        i++;
    }
}
int main() 
{
  char *c= "////////hel///low/sa/ll/////kk///////////";
  char d = '/';
  printf("%d",count_w(c,d));
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:27:17 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/11 21:35:57 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

static int count_w(char *str, char ca)
{
    
   int pos;
   int count;
   int i = 0;
   pos = 1;
   count = 0;
   while (*str)
   {
        if (*str != ca && pos == 1)
        {
            count++;
            while (str[i] != ca)
            {
                i++;
            }
            pos = 0;
            
        }
        else if (*str == ca)
            pos = 1;
        str++;
   }
   return count;
}
static int count_size_wo(char *st,char c)
{
   int pos;
   int i = 0;
   pos = 1;
   while (*str)
   {
        if (*str != ca && pos == 1)
        {
            while (str[i] != ca)
            {
                i++;
            }
            pos = 0;
        }
        else if (*str == ca)
            pos = 1;
        str++;
   }
   return i;
}
char **ft_split(char const *s, char c)
{
    int cw;
    int i;
    char **ml;

    wc = count_w(s,c);
    i = 0;
    //
    ml = (char **)malloc(sizeof(char *) * wc + 1);
    // if string is null
    if (!s)
        return NULL;
    //
    if(!ml)
        return 0;
    int count_size = count_size_wo(*s,);
    while (*s)
    {
        ml[wc][i] = 
    }
    
}

int main()
{
    char *cc = "       eerwt  rtr   lkfjkh jhfajksh khadjsfhh kjfhajks jkhfkadjs   sfrqrt";
    char c = ' ';
    printf("%d", count_w(cc,c));
}
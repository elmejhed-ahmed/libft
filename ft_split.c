/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:27:17 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/12 00:07:50 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_w(const char *str, char ca)
{

	int pos;
	int count;
	pos = 1;
	count = 0;
	while (*str)
	{
		if (*str != ca && pos == 1)
		{
			count++;
			pos = 0;
		}
		else if (*str == ca)
			pos = 1;
		str++;
	}
	return count;
}
// static int count_size_wo(char *strc, char ce )
// {
	
// }
char **ft_split(char const *s, char c)
{
	int cw;
	int i;
	char **ml;
	i = 0;
	int j;
	int k;
	int u;
	k =0;
	if (!s)
		return NULL;
	cw = count_w(s, c);

	ml = (char **)malloc(sizeof(char *) * cw + 1);
	
	if (!ml)
		return 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			j = i;
			while(s[j] && s[j] != c)
				j++;
			ml[k]= malloc((j - i) + 1);
			// if (!ml[k])
				//TODO FREE ALLOCATE  ML[K] AND ML HOWA LAKHER 
			u = 0;
			while (s[i] && s[i] != c)
				ml[k][u++] = s[i++];
			ml[k++][u] = '\0';
		}
		
	}
	ml[k] = NULL;
 	return ml;
}

// int main()
// {
// 	char *cc = " ABCD HHH JJJ  O   KOO";
// 	char c = ' ';
// 	char **str = ft_split(cc,c);
// 	int i =0;
// 	while (str[i])
// 	{
// 		printf("%s\n",str[i++]);

// 	}
// }
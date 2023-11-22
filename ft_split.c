/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:27:17 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/22 17:33:23 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_w(const char *str, char ca)
{
	int	pos;
	int	count;

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
	return (count);
}

static char	**freeallocation(char **mall1, int k)
{
	int i;
	
	i = 0;
	while (i < k)
    {
        free(mall1[i]);
        i++;
    }
    free(mall1);
    return (NULL);
}

static	char	**printword(char const *str, char ce, char **mall)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == ce && str[i])
			i++;
		if (str[i])
		{
			j = i;
			while (str[j] && str[j] != ce)
				j++;
			mall[k] = (char *)malloc((j - i) + 1);
			 if (mall[k] == NULL)
       	 	{
            mall = freeallocation(mall, k);
            return mall; 
        	}
			ft_memcpy(mall[k],&str[i], j - i);
			mall[k][j - i] = '\0';
			k++;
			i = j;
		}
		j++;
	}
	mall[k] = NULL;
	return (mall);
}

char	**ft_split(char const *s, char c)
{
	int		cw;
	char	**ml;
	char	**ll;

	if (!s)
		return (0);
	cw = count_w(s, c);
	ml = (char **)malloc(sizeof(char *) * (cw + 1));
	if (cw == 0)
	{
		ml[0] = NULL;
		return (ml);
	}
	if (!ml)
	{
		free(ml);
		return (NULL);
	}
	ll = printword(s, c, ml);
	if (!ll)
		return freeallocation(ml,cw);
	return (ll);
}
// int main()
// {
// 	char *cc = "hello!";
// 	char c = ' ';
// 	char **str = ft_split(cc,c);
// 	int i =0;
// 	while (str[i])
// 	{
// 		printf("%s\n",str[i++]);
// 	}
// }
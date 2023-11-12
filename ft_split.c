/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:27:17 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/12 18:03:01 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// count words  
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
// free allocation
static char **freeallocation(char **mall1,char *mall2, int i)
{
		while(mall2[i] && i >= 0)
		{
			free (mall1[i]);
			i--;
		}
		free (&mall1);
		return 0;
	
}
// print words
static	char	**printword(char const *str, char ce, char **mall)
{
	int	i;
	int	j;
	int	k;
	int	u;
	
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
			mall[k] = malloc((j - i) + 1);
			if (!mall[k])
				return (freeallocation(mall,mall[k],j - i + 1));
			u = 0;
			while (str[i] && str[i] != ce)
				mall[k][u++] = str[i++];
			mall[k++][u] = '\0';
		}
	}
	mall[k] = NULL;
	return (mall);
}

char	**ft_split(char const *s, char c)
{
	int		cw;
	char	**ml;
	char	**ll;

	if (*s == '\0' || c == '\0')
		return (0);
	cw = count_w(s, c);
	if (cw == 0)
		return 0;
	ml = (char **)malloc(sizeof(char *) * cw + 1);
	if (cw == 0)
	{
		ml[0] = "\0";
		return ml;
	}
	if (!ml)
		return (0);
	ll = printword(s, c, ml);
	
	return (ll);
}

int main()
{
	char *cc = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
	char c = ' ';
	char **str = ft_split(cc,c);
	int i =0;
	while (str[i])
	{
		printf("%s\n",str[i++]);
	}
}
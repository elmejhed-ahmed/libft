/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:27:17 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/26 17:47:48 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// this func for count word
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
//this func for free allocation memory
static char	**freeallocation(char **mall1, int k)
{
	int	i;

	i = 0;
	while (i < k)
	{
		free(mall1[i]);
		i++;
	}
	free(mall1);
	return (NULL);
}
//this func for count size of the word and allocate memory for this size and copy same word in this alliocation 
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
				return (freeallocation(mall, k)); 
			ft_memcpy (mall[k], &str[i], j - i);
			mall[k++][j - i] = '\0';
			i = j;
		}
	}
	mall[k] = NULL;
	return (mall);
}
//and this for count word and allocated memory for count 
char	**ft_split(char const *s, char c)
{
	int		cw; 
	char	**ml;
	char	**ll;

	if (!s)
		return (0);
	cw = count_w(s, c);
	ml = (char **)malloc(sizeof(char *) * (cw + 1));
	if (!ml)
		return (NULL);
	if (cw == 0)
	{
		ml[0] = NULL;
		return (ml);
	}
	ll = printword(s, c, ml);
	return (ll);
}
int main()
{
	char p[] = "hello\tevery\tone\the";
	
	int  i=0;
	char **po = ft_split(p,'\t');
	while (po[i])
	{
		printf("%s\n",po[i]);
		i++;
	}
	
}
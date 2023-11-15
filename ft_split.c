/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:27:17 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/15 01:52:58 by ael-mejh         ###   ########.fr       */
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

static char	**freeallocation(char **mall1, char *mall2, int i)
{
	while (mall2[i] && i >= 0)
	{
		free(mall1[i]);
		i--;
	}
	free(mall1);
	return (0);
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
			mall[k++] = ft_substr(str, i, j - i);
		}
		i = j;
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
		return (ml);
	}
	ll = printword(s, c, ml);
	if (!ll)
		freeallocation(ml, NULL, cw);
	return (ll);
}

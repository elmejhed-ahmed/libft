/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:27:17 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/13 18:33:19 by ael-mejh         ###   ########.fr       */
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
				return (freeallocation(mall, mall[k], j - i + 1));
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

	cw = count_w(s, c);
	ml = (char **)malloc(sizeof(char *) * (cw + 1));
	if (!ml)
	{
		free(ml);
		return (ml);
	}
	ll = printword(s, c, ml);
	return (ll);
}

// int main()
// {
//     const char *inputString = "          ";
//     char delimiter = ' ';

//     char **result = ft_split(inputString, delimiter);
//     // Print the split words
//     for (int i = 0; result[i] != NULL; i++) {
//         printf("%s\n",result[i]);
//     }
// }

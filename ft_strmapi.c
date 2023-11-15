/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:17:49 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/15 17:19:06 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ml;

	i = 0;
	if(!s)
		return 0;
	ml = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!ml)
		return (0);
	while (s[i])
	{
		ml[i] = f(i, s[i]);
		i++;
	}
	ml[i] = '\0';
	return (ml);
}
/*char f(unsigned int i, char g)
{
    if (g >= 97 && g <= 122)
       g = g - 32;
    return g;
}
int main()
{
    char s[5] = {'h','g','k','p'};
    char *gg = ft_strmapi(s,f);
    printf("%s",gg);
}*/

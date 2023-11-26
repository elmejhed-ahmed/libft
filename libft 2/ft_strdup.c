/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:54:18 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/26 18:21:00 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*des;

	i = 0;
	des = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!des)
		return (0);
	while (s1[i] != '\0')
	{
		des[i] = s1[i];
		i++;
	}
	des[i] = '\0';
	return (des);
}
int main()
{
	char str[] = "hir jlfalif jlfisajfoir dafjhfka";
	printf("%s",ft_strdup(str));
}

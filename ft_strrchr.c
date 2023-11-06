/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:16:46 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/04 19:06:14 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	lens;

	lens = ft_strlen(str);
	while (lens >= 0)
	{
		if (str[lens] == (char)c)
		{
			return ((char *)&str[lens]);
		}
		lens--;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:16:46 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/03 20:28:11 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
		size_t len_S;
		len_S = ft_strlen(str);

		while(len_S--)
		{
			if(str[len_S] == c)
			{
				return (char *)&str[len_S];
			}
		}
		return NULL;
}



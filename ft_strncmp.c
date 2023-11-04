/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:56:43 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/04 11:12:18 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2,size_t n)
{
	size_t i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if((unsigned char)s1[i] != (unsigned char)s2[i])
			return (unsigned char)s1[i]-(unsigned char)s2[i];
	 	i++;
	}	
	return 0;
}

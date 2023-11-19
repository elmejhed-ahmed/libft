/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 20:17:41 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/19 20:23:02 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    t_list *cur;
    int i;

    i = 0;
    if (lst == NULL)
        return NULL;
    cur = lst;
    while (cur != NULL)
    {
        cur = cur->next;
        i++;
    }
    return i;
}
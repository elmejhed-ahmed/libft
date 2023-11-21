/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:51:56 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/21 13:59:49 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *node;
    t_list *tp;
    
    node = *lst;
    while (node != NULL)
    {
        tp = node->next;
        del(node->next);
        free(node);
        tp = node;
    }
}

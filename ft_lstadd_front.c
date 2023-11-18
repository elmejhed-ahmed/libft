/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 13:37:14 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/17 17:52:28 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = *lst;
    *lst = new;
}
int main()
{
    t_list *node = NULL;
    t_list *node1 = ft_lstnew("ana");
    t_list *node2 = ft_lstnew("howa");
    t_list *node3 = ft_lstnew("ahmed");
    t_list *curr;

    curr = node;

    node1->next = node2; 
    ft_lstadd_front(&node, node3);
    node3->next = node2;
    while (curr != NULL)
    {
        printf("%s\n", curr->content);
        curr = curr->next;
    }
}   
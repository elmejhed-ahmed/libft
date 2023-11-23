/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:51:56 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/23 11:37:36 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void del(void *con)
{
    if(con != NULL)
        free(con);
}
void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *node;
    t_list *tp;
    
    if (!lst || !del)
        return;
    node = *lst;
    while (node != NULL)
    {
        tp = node->next;
        del(node->content);
        free(node);
        node = tp;
    }
    *lst = NULL;
}
int main ()
{
    t_list *node;
    t_list *n1 = ft_lstnew(ft_strdup("hel"));  // Use strdup to create a copy of the string
    t_list *n2 = ft_lstnew(ft_strdup("hur"));


    node = n1;
    n1->next = n2;
    n2->next = NULL;
    ft_lstclear(&node, &del);

    return 0;
}

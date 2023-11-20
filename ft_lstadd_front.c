/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 13:37:14 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/20 11:01:47 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (new == NULL)
        return;
    if (*lst == NULL)
        *lst = new;
    else
    {
        new->next = *lst;
        *lst = new;
    }
}
// int main()
// {
//     t_list *node;
    
//     t_list *n1 = ft_lstnew("hello");
//     t_list *n2 = ft_lstnew("he");
//     t_list *n3 = ft_lstnew("ff");
    
//     node = n1;

//     n1->next = n2;
//     ft_lstadd_front(&node,n3);
//     while(node != NULL)
//     {
//         printf("%s\n",node->content);
//         node = node->next;
//     }
//     //---------------------------------------
//     t_list *node;
//     t_list *n1 = ft_lstnew("howa");
//     t_list *n2 = ft_lstnew("ana");
//     t_list *n3 = ft_lstnew("ahmed");
//     node = n1;
//     n1-> next = n2;
    
//     ft_lstadd_front(&node,n3);
    
//     while(node != NULL)
//     {
//         printf("%s\n",node->content);
//         node= node->next;
//     }
// }   
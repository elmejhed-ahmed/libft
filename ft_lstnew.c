/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:02:38 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/19 17:11:55 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *node;
    node = (t_list *)malloc(sizeof(t_list));
    if (!node)
        return NULL;
    node->content = content;
    node->next    = NULL;
    return node;
}
// int main()
// {
//     t_list *head;
    
//     t_list *n1 = ft_lstnew("hi");    
//     t_list *n2 = ft_lstnew("ko");    
//     t_list *n3 = ft_lstnew("mmm");    
//     t_list *n4 = ft_lstnew("poui");
//     head = n1;
//     n1->next=n2;
//     n2->next=n3;
//     n3->next=n4;
//     n4->next= NULL;
//     while (head != NULL)
//     {
//         printf("%s\n",head->content);
//         head = head->next;
//     }
    
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:06:59 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/21 16:27:21 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *)) {
    t_list *node;
    if (lst == NULL)
        return;
    node = lst;
    while (node != NULL) {
        f(node->content);  
        node = node->next;
    }
}

// int main()
// {
//     t_list *node;
//     t_list *n1 = ft_lstnew("lokp");
//     t_list *n2 = ft_lstnew("kolpssw");
//     node = n1;
//     n1->next = n2;
//     n2->next= NULL;
//     ft_lstiter(node,&f);
// }
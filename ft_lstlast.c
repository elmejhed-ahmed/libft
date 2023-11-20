/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:33:11 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/20 10:46:41 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    t_list *node;
    
    if (lst == NULL)
        return NULL;
    node = lst;
    while (node->next != NULL)
    {
        node = node->next;
    }
    return node;
    
}
// int main()
// {
//     t_list *no;
//     t_list *n1 = ft_lstnew("kd");
//     t_list *n2 = ft_lstnew("kf");
//     t_list *n3 = ft_lstnew("ll");
//     no = n1;
//     n1->next= n2;
//     n2->next= n3;
//     t_list *ll = ft_lstlast(no);
  
//     printf("%s",ll->content);
// }
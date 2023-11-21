/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:50:26 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/21 10:00:52 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last;
    if (*lst == NULL)
        *lst = new;
    if (new == NULL)
        return;
    last = ft_lstlast(*lst);
    last->next = new;
}
// int main()
// {
//     t_list *j;
//     t_list *n1 = ft_lstnew("lk");
//     t_list *n2 = ft_lstnew("k");
//     t_list *n3 = ft_lstnew("l");
//     t_list *ls = ft_lstnew("in last");
    
//     j = n1;
//     n1->next = n2;
//     n2->next = n3;
//     ft_lstadd_back(&j,ls);
//     while(j != NULL)
//     {
//            printf("%s\n",j->content);
//            j = j->next;    
//     }
// }
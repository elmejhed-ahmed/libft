/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:50:26 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/23 10:50:42 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last;
    if (*lst == NULL)
    {
        *lst = new;
    }
    if (new == NULL)
        return;
    last = ft_lstlast(*lst);
    last->next = new;
    new->next = NULL;
}


int main()
{
    t_list *j = NULL;
    // t_list *n1 = ft_lstnew("lk");
    // t_list *n2 = ft_lstnew("k");
    // t_list *n3 = ft_lstnew("l");
    t_list *ls = ft_lstnew("in last");
    t_list *ls1 = ft_lstnew("hiih");
    t_list *ls2 = ft_lstnew("kjk");
    t_list *ls3 = ft_lstnew("fjei");
    
    //j = n1;
    // n1->next = n2;
    // n2->next = n3;
    ft_lstadd_back(&j,ls);
    ft_lstadd_back(&j,ls1);
    ft_lstadd_back(&j,ls2);
    ft_lstadd_back(&j,ls3);
    while(j != NULL)
    {
           printf("%s\n",j->content);
           j = j->next;    
    }
}
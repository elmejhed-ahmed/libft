/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:13:36 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/21 10:45:34 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    del(lst->content);
    free(lst);
}
//int main()
// {
//     t_list *head;
//     t_list *n1 =ft_lstnew("hellow");
//     t_list *n2 =ft_lstnew("del");
//     t_list *n3 =ft_lstnew("lk");

//     head = n1;
//     n1->next = n2;
//     n2->next = n3;
//     ft_lstdelone(n3);
//     while(head != NULL)
//     {
//         printf("%s",head->content);
//         head = head->next;
//     }
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 20:17:41 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/20 09:29:46 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    t_list *cur;
    int i;

    i = 0;
    if (lst == NULL)
        return (0);
    cur = lst;
    while (cur != NULL)
    {
        cur = cur->next;
        i++;
    }
    return i;
}
// int main()
// {
//     t_list *node;
//     t_list *n1 = ft_lstnew("l");
//     t_list *n2 = ft_lstnew("ll");
//     t_list *n3 = ft_lstnew("lll");
//     node = n1;
//     n1->next = n2;
//     n2->next = n3;
//     n3->next = NULL;

//     printf("%d",ft_lstsize(node));
// }
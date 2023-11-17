/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:02:38 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/11/17 13:33:42 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *node; 
    
    node = malloc(sizeof(t_list));
    if(!node)
        return 0;
    node->content = content;
    node->next = NULL;
    return node;
}
// int main()
// {
//     t_list ll;
//     int tab[3] = {1,2,3};
//     int tab1[3]= {4,5,6};
//     int tab2[3]= {7,8,9};
//     int i = 0;
//     while(i < 3)
//     {
//         printf("%d ", tab[i]);
//         i++;
//     }
//     printf("\n");
//     i = 0;
//     while(i < 3)
//     {
//         printf("%d ", tab1[i]);
//         i++;
//     }
//     printf("\n");
//     i = 0;
//     while(i < 3)
//     {
//         printf("%d ", tab2[i]);
//         i++;
//     }
//     //t_list *t = ft_lstnew(s);
//    // printf("%s",t->content);
// }
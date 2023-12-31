/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:42:12 by ael-mejh          #+#    #+#             */
/*   Updated: 2023/12/01 18:19:02 by ael-mejh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*nw;

	head = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst != NULL)
	{
		nw = ft_lstnew(lst->content);
		if (!nw)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		nw->content = f(lst->content);
		if (!nw->content)
		{
			free(nw);
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, nw);
		lst = lst->next;
	}
	return (head);
}

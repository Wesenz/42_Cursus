/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:12:22 by marcfer2          #+#    #+#             */
/*   Updated: 2023/07/12 16:36:56 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*pointednode;

	if (!lst || !f || !del)
		return (0);
	newlist = ft_lstnew(f(lst->content));
	if (!newlist)
		return (0);
	pointednode = newlist;
	lst = lst->next;
	while (lst != NULL)
	{
		newlist->next = ft_lstnew(f(lst->content));
		if (!newlist->next)
		{
			ft_lstclear(&pointednode, del);
			return (0);
		}
		newlist = newlist->next;
		lst = lst->next;
	}
	newlist->next = NULL;
	return (pointednode);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:12:22 by marcfer2          #+#    #+#             */
/*   Updated: 2023/07/14 17:41:24 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*headnode;
	t_list	*tmpnode;
	t_list	*auxnode;

	if (!lst || !f || !del)
		return (NULL);
	headnode = NULL;
	while (lst != NULL)
	{
		auxnode = f(lst->content);
		tmpnode = ft_lstnew(auxnode);
		if (!tmpnode)
		{
			ft_lstclear(&headnode, del);
			free(auxnode);
			return (NULL);
		}
		ft_lstadd_back(&headnode, tmpnode);
		lst = lst->next;
	}
	return (headnode);
}

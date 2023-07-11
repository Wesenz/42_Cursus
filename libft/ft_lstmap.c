/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:12:22 by marcfer2          #+#    #+#             */
/*   Updated: 2023/07/11 16:12:22 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{   
    t_list *newList;
    t_list *pointedNode;
    
    if (!lst || !f || !del)
		return (0);
    newList = ft_lstnew(f(lst->content));
    if (!newList)
        return (0);
    pointedNode = newList;
    lst = lst->next;
    while (lst != NULL)
    {   
        newList->next = ft_lstnew(f(lst->content));
        if (!newList->next)
		{
			ft_lstclear(&pointedNode, del);
			return (0);
		}
        newList = newList->next;
        lst = lst->next;
    }
    newList->next = NULL;
    return (pointedNode);
}
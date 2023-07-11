/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:27:33 by marcfer2          #+#    #+#             */
/*   Updated: 2023/07/11 14:27:33 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *nextNode;
    t_list  *startNode;

    startNode = *lst;
    while (startNode != NULL)
    {
        nextNode = startNode->next;
        del(startNode->content);
        free(startNode);
        startNode = nextNode;
    }
    *lst = NULL;
}
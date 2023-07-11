/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:27:50 by marcfer2          #+#    #+#             */
/*   Updated: 2023/07/11 14:27:50 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *newNode)
{   
    t_list  *pointedNode;

    if (!lst || !newNode)
        return;
    if (*lst == NULL)
    {
        *lst = newNode;
    }
    else
    {
        pointedNode = *lst;
        while (pointedNode->next != NULL)
        {
            pointedNode = pointedNode->next;
        }
        pointedNode->next = newNode;
    }
}
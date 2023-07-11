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

    pointedNode = *lst;
    if (pointedNode != NULL)
    {
        if (pointedNode->next == NULL)
        {   
            pointedNode->next = newNode;
            newNode->next = NULL;
        }
    }
}
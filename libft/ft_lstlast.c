/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:31:37 by marcfer2          #+#    #+#             */
/*   Updated: 2023/07/12 16:33:42 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*pointednode;

	pointednode = lst;
	while (pointednode != NULL)
	{
		if (!pointednode->next)
		{
			return (pointednode);
		}
		pointednode = pointednode->next;
	}
	return (pointednode);
}

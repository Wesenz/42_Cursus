/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:38:02 by marcfer2          #+#    #+#             */
/*   Updated: 2023/07/12 16:42:07 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	unsigned int	counter;
	t_list			*pointednode;

	counter = 0;
	pointednode = lst;
	if (pointednode == NULL)
		return (counter);
	while (pointednode != NULL)
	{
		counter++;
		pointednode = pointednode->next;
	}
	return (counter);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:27:33 by marcfer2          #+#    #+#             */
/*   Updated: 2023/07/12 16:30:53 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nextnode;
	t_list	*startnode;

	startnode = *lst;
	while (startnode != NULL)
	{
		nextnode = startnode->next;
		del(startnode->content);
		free(startnode);
		startnode = nextnode;
	}
	*lst = NULL;
}

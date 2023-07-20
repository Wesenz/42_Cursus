/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:27:50 by marcfer2          #+#    #+#             */
/*   Updated: 2023/07/14 17:38:34 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *newNode)
{
	t_list	*pointednode;

	if (*lst == NULL)
		*lst = newNode;
	else
	{
		pointednode = *lst;
		while (pointednode->next != NULL)
		{
			pointednode = pointednode->next;
		}
		pointednode->next = newNode;
	}
}

// void del(void *num)
// {
// 	free(num);	
// }

// void *f(void *num)
// {
// 	int *newnum;

// 	newnum = malloc(sizeof(int));
// 	if (newnum != NULL)
// 		*newnum = *((int *)num) * 2;
// 	return(newnum);
// }

// int main(void)
// {
// 	t_list *root;
// 	t_list *newroot;
// 	t_list *aux;
// 	int		*num;
// 	int		*num1;
// 	int		*num2;

// 	root = NULL;
// 	num = malloc(sizeof(int));
// 	num1 = malloc(sizeof(int));
// 	num2 = malloc(sizeof(int));
// 	*num = 100;
// 	*num1 = 200;
// 	*num2 = 300;
// 	//root = ft_lstnew(num);
// 	ft_lstadd_back(&root,ft_lstnew(num));
// 	ft_lstadd_back(&root,ft_lstnew(num1));
// 	ft_lstadd_back(&root,ft_lstnew(num2));
// 	aux = root;
// 	while(aux)
// 	{
// 		printnode(aux);

// 		aux = aux->next;
// 	}
// 	newroot = ft_lstmap(root,&f,&del);
// 	aux = newroot;
// 	while(aux)
// 	{
// 		printnode(aux);

// 		aux = aux->next;
// 	}
// 	return (0);
// }

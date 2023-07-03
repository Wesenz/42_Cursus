#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *newNode)
{
    if (lst != NULL && newNode != NULL)
    {
        newNode->next = *lst;
        *lst = newNode;
    }
}
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
#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    t_list  *pointedNode;

    pointedNode = lst;
    while (pointedNode != NULL)
    {
        if (!pointedNode->next)
        {
            return(pointedNode);
        }
        pointedNode = pointedNode->next;
    }
    return (pointedNode);
}
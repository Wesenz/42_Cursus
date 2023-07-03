#include "libft.h"

int ft_lstsize(t_list *lst)
{   
    unsigned int counter;
    t_list  *pointedNode;

    counter = 0;
    pointedNode = lst;
    if (pointedNode == NULL)
        return (counter);
    while (pointedNode != NULL)
    {
        counter++;
        pointedNode = pointedNode->next;
    }
    return (counter);
}
#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list  *newNode;

    newNode = (t_list *)malloc(sizeof(t_list));
    if (!newNode)
        return (NULL);
    newNode->content = (void *)content;
    newNode->next = NULL;
    return (newNode);
}
#include <stdlib.h>
#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *current = head;
while (current != NULL && i < index)
{
current = current->next;
i++;
}
if (i == index && current != NULL)
{
return (current);
}
else
{
return (NULL);
}
}

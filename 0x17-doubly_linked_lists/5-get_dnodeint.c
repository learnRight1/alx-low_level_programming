#include "lists.h"

/**
 * get_dnodeint_at_index - eturns the nth node of a dlistint_t linked list.
 * @head: double pointer to the head of the list
 * @index: index of the node to return
 *     
 * Return: if the node does not exist, return NULL
 * where index is the index of the node, starting from 0
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
<<<<<<< HEAD
dlistint_t *current;
unsigned int i;
current = head;
i = 0;
while (current != NULL)
{
if (i == index)
return (current);
current = current->next;
i++;
}
return (NULL);
=======
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
>>>>>>> f03df6b7b07ccb6addaf19383329eeb36065a816
}

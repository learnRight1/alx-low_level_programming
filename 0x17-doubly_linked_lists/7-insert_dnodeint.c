#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a doubly linked list.
 * @h: Pointer to the head of the list.
 * @idx: Index of the position where the new node should be inserted.
 * @n: Value to be stored in the new node.
 * Return: Address of the new node or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *temp = *h;
unsigned int i = 0;
if (!h)
return (NULL);
if (idx == 0)
return (add_dnodeint(h, n));
while (temp && i < idx - 1)
{
temp = temp->next;
i++;
}
if (!temp)
return (NULL);
if (!temp->next)
return (add_dnodeint_end(h, n));
new_node = malloc(sizeof(dlistint_t));
if (!new_node)
return (NULL);
new_node->n = n;
new_node->prev = temp;
new_node->next = temp->next;
temp->next->prev = new_node;
temp->next = new_node;
return (new_node);
}

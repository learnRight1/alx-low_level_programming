#include "lists.h"

/**
<<<<<<< HEAD
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer to the head of the list
 *    
 * Return: number of nodes
=======
 * dlistint_len - Returns the number of elements in a dlistint_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of elements in the list.
>>>>>>> f03df6b7b07ccb6addaf19383329eeb36065a816
 */

size_t dlistint_len(const dlistint_t *h)
{
int counter = 0;
if (h == NULL)
return (counter);
while (h != NULL)
{
counter++;
h = h->next;
}
return (counter);
}

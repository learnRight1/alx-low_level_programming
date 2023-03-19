#include "lists.h"

/**
<<<<<<< HEAD
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to the head of the list
 *    
 * Return: number of nodes
=======
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
>>>>>>> f03df6b7b07ccb6addaf19383329eeb36065a816
 */

size_t print_dlistint(const dlistint_t *h)
{

int counter = 0;

if (h == NULL)
return (counter);

while (h->prev != NULL)
h = h->prev;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
counter++;
}

return (counter);
}

#include "lists.h"

/**
<<<<<<< HEAD
 * sum_dlistint - returns the sum of all
 * the data (n) of a dlistint_t linked list.
 * @head: double pointer to the head of the list
 *     
 * Return: if the list is empty, return 0
=======
 * sum_dlistint - Returns the sum of all the data (n).
 *
 * @head: Pointer to the head of the linked list.
 *
 * Return: The sum of all the data (n) of the linked list.
>>>>>>> f03df6b7b07ccb6addaf19383329eeb36065a816
 */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *i;
for (i = head; i != NULL; i = i->next)
{
sum += i->n;
}
return (sum);
}

#include "lists.h"

/**
<<<<<<< HEAD
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the head of the list.
 *    
 */
=======
 * dlistint_t *temp -  we start by declaring a 'temp' variable
*  while loop: we loop through the list and check if the current node is not NULL
*  @head - then we update the 'head' pointer
*/
>>>>>>> f03df6b7b07ccb6addaf19383329eeb36065a816

void free_dlistint(dlistint_t *head)
{
while (head != NULL)
{
dlistint_t *next = head->next;
free(head);
head = next;
}
}

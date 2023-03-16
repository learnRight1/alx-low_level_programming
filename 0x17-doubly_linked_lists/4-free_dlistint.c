#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_t *temp -  we start by declaring a 'temp' variable
*  while loop: we loop through the list and check if the current node is not NULL
*  @head - then we update the 'head' pointer
*/

void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;
while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}

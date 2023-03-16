#include <stdio.h>
#include <stdlib.h>

/* Doubly linked list node structure */
typedef struct dlistint_s {
int n;
struct dlistint_s *prev;
struct dlistint_s *next;
} dlistint_t;

/* Deletes the node at the given index in the doubly linked list */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index) {
dlistint_t *current = *head;

/* If list is empty or index is out of range */
if (*head == NULL || index < 0) {
return -1;
}

/* Delete the head node */
if (index == 0) {
*head = current->next;
if (current->next != NULL) {
current->next->prev = NULL;
}
free(current);
return 1;
}

/* Traverse the list to find the node to delete */
unsigned int i;
for (i = 0; current != NULL && i < index; i++) {
current = current->next;
}

/* If index is greater than the number of nodes */
if (current == NULL) {
return -1;
}

/* Delete the node */
current->prev->next = current->next;
if (current->next != NULL) {
current->next->prev = current->prev;
}
free(current);
return 1;
}

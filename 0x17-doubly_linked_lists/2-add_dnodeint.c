include "lists.h"

/**
<<<<<<< HEAD
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: double pointer to the head of the list
 * @n: data to be added
 *     
 * Return: he address of the new element, or NULL if it failed
=======
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The value to be stored in the new node.
 *
 * Return: A pointer to the new node, or NULL if it failed.
>>>>>>> f03df6b7b07ccb6addaf19383329eeb36065a816
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = *head;
new_node->prev = NULL;
if (*head != NULL)
(*head)->prev = new_node;
*head = new_node;
return (new_node);
}

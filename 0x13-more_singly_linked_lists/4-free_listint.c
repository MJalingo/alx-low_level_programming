#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head of the list
 */
void free_listint(listint_t *head)
{
listint_t *current = head, *next;
while (!(current == NULL))
{
next = current->next;
free(current);
current = next;
}
}

#include "lists.h"
/**
 * pop_listint - Should delete the head node of a linked list
 * @head: The pointer to the first element in the linked list
 *
 * Return: The deleted data that was inside the elements,
 * or NULL if the list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int num;
if (!head || !*head)
return (0);
num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (num);
}

#include "lists.h"
/**
 * get_nodeint_at_index- Return the node at a certain index in a linked list
 * @head: The first node in the linked list
 * @index: The index of the node to return
 *
 * Return: The pointer to the node being looked for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int z = 0;
listint_t *temp = head;
while (temp && z < index)
{
temp = temp->next;
z++;
}
return (temp ? temp : NULL);
}

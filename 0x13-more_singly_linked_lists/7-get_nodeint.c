#include "lists.h"

/**
 * get_nodeint_at_index - function of the program that returns
 * the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to be returned
 * Return: point to the  searched node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int c = 0;
listint_t *temp = head;

while (temp && c < index)
{
temp = temp->next;
c++;
}

return (temp ? temp : NULL);
}

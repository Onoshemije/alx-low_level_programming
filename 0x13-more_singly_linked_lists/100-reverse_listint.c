#include "lists.h"

/**
 * reverse_listint - Entry Point
 * @head: head
 * Return: 0
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *behind;

	if (head == NULL || *head == NULL)
		return (NULL);

	behind = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind = *head;

	}

	(*head)->next = behind;

	return (*head);
}

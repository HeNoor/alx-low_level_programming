#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the
 *               data (n) of a listint_t
 * @head: pointer to the head of the listint_t
 * Return: Always 0 (Success)
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
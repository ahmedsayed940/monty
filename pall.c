#include "monty.h"
/**
 * pall - prints the stack
 * @top: stack head
 * @counter: no used
 * Return: no return
*/
void pall(stack_t **top, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *top;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}

#include "monty.h"
/**
 * add - adds the top two elements of the stack.
 * @top: stack head
 * @counter: line_number
 * Return: no return
*/
void add(stack_t **top, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *top;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(var.file);
		free(var.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	h = *top;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*top = h->next;
	free(h);
}

#include "monty.h"
/**
 * pop - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void pop(stack_t **top, unsigned int counter)
{
	stack_t *h;

	if (*top == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(var.file);
		free(var.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	h = *top;
	*top = h->next;
	free(h);
}

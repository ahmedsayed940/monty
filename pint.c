#include "monty.h"
/**
 * pint - prints the top
 * @top: stack head
 * @counter: line_number
 * Return: no return
*/
void pint(stack_t **top, unsigned int counter)
{
	if (*top == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(var.file);
		free(var.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*top)->n);
}

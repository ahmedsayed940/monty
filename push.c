#include "monty.h"
/**
 * push - add node to the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void push(stack_t **top, unsigned int counter)
{
	int ele, j = 0, f = 0;

	if (var.arg)
	{
		if (var.arg[0] == '-')
			j++;
		for (; var.arg[j] != '\0'; j++)
		{
			if (var.arg[j] > 57 || var.arg[j] < 48)
				f = 1; 
		}
		if (f == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(var.file);
			free(var.content);
			free_stack(*top);
			exit(EXIT_FAILURE); 
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(var.file);
		free(var.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	ele = atoi(var.arg);
	if (var.flag == 0)
		add_node(top, ele);
	else
		add_queue(top, ele);
}

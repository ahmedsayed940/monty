#ifndef MONTY_H
#define MONTY_H
#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct varb - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @flag: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct varb
{
	char *arg;
	FILE *file;
	char *content;
	int flag;
}  var_s;
extern var_s var;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void push(stack_t **top, unsigned int number);
void pall(stack_t **top, unsigned int number);
void pint(stack_t **top, unsigned int number);
int exec(char *content, stack_t **top, unsigned int counter, FILE *file);
void free_stack(stack_t *top);
void pop(stack_t **top, unsigned int counter);
void swap(stack_t **top, unsigned int counter);
void add(stack_t **top, unsigned int counter);
void nop(stack_t **top, unsigned int counter);
void add_node(stack_t **top, int ele);
void add_queue(stack_t **top, int ele);
void queue(stack_t **top, unsigned int counter);
#endif

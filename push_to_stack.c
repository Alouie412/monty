#include "monty.h"

/**
 * push_to_stack - Function that creates a new linked list node
 * @stack: The stack. Basically, a linked list in stack format
 * @line_num: Line number where the push command was called from the .m file
 * (Technically, the line from the .m file is also passed in. See strtok)
 * Return: Nothing. Exits if no argument is found, if argument is invalid, or
 * if malloc fails
 */
void push_to_stack(stack_t **stack, unsigned int line_num)
{
	stack_t *new_node = NULL;
	char *integer = NULL;

	/**
	 * Strtoking here moves the static pointer. We only want the integer
	 * being pushed. It is NULL because we have already strtok'd our line
	 * in read_file.c, and the static pointer has not changed since
	 */
	integer = strtok(NULL, DELIMIT);
	if (integer == NULL || isdigit(*integer) == 0)
	{
		printf("L%u: usage: push integer\n", line_num);
		atexit(free_them_all);
		exit(EXIT_FAILURE);
	}

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = atoi(integer);
	new_node->prev = NULL;
	new_node->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = new_node;

	*stack = new_node;
}

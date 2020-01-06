#include "monty.h"

void rotate_last(stack_t **stack, unsigned int line_num)
{
	stack_t *new_last = *stack;
	(void) line_num;

	while (new_last->next != NULL)
		new_last = new_last->next;

	new_last->next = *stack;
	(*stack)->prev = new_last;
	new_last = (*stack)->next;
	new_last->prev = NULL;
	(*stack)->next = NULL;
	*stack = new_last;
}

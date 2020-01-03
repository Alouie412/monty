#include "monty.h"

void print_stack(stack_t **stack, unsigned int line_num)
{
  stack_t *temp = *stack;
  (void) line_num;

  while (temp != NULL)
    {
      printf("%d\n", temp->n);
      temp = temp->next;
    }
}

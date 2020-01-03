#include "monty.h"

void print_int(stack_t **stack, unsigned int line_num)
{
  if (stack == NULL || *stack == NULL)
    {
      printf("L%u: can't pint, stack empty\n", line_num);
      exit(EXIT_FAILURE);
    }

  printf("%d\n", (*stack)->n);
}
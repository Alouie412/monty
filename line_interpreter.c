#include "monty.h"

void line_interpreter(stack_t **stack, char *command, unsigned int line_num)
{
  instruction_t instruction[] = {
    {"push", push_to_stack},
    {"pall", print_stack},
    {"pint", print_int},
    {NULL, NULL}
  };
  int i = 0;

  while (instruction[i].opcode != NULL)
    {
      if (strcmp(command, instruction[i].opcode) == 0)
	{
	  instruction[i].f(stack, line_num);
	  return;
	}
      i++;
    }

  if (strlen(command) != 0)
    {
      printf("L%u: unknown instruction %s", line_num, command);
      exit(EXIT_FAILURE);
    }
}

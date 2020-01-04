#include "monty.h"

/**
 * filler - This
 * @stack: Is
 * @line_num: A
 * Return: Filler
 */
void filler(stack_t **stack, unsigned int line_num)
{
	(void) **stack;

	printf("This is a filler function. ");
	printf("Your line number is %u, by the way.\n", line_num);
}

/**
 * line_interpreter - Function that matches the command in a file with
 * the given struct and executes the respective functions, if possible
 * @stack: The stack. A linked list in stack format
 * @command: The command extracted from the .m file, strtok'd
 * @line_num: The line number where the command is found in the .m file
 * Return: Nothing. Exits program if the command cannot be found
 */
void line_interpreter(stack_t **stack, char *command, unsigned int line_num)
{
	instruction_t instruction[] = {
	{"push", push_to_stack},
	{"pall", print_stack},
	{"pint", print_int},
	{"pop", Poppin_Party},
	{"swap", swap},
	{"add", addition},
	{"nop", nope},
	{"sub", subtraction},
	{"div", division},
	{"mul", multiplication},
	{"mod", modulo_op},
	{"pchar", print_char},
	{"pstr", print_string},
	{"rotl", filler},
	{"rotr", filler},
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

	if (strlen(command) != 0 && command[0] == '#')
	{
		printf("L%u: unknown instruction %s", line_num, command);
		exit(EXIT_FAILURE);
	}
}

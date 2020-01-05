#include "monty.h"

/**
 * main - The driver function. Start here to begin the program
 * @argc: Number of arguments passed in
 * @argv: Arguments stored in each index
 * Return: Failure if invalid arguments passed in. Else success
 * assuming no exit conditions are met in other files
 */
int main(int argc, char *argv[])
{
	stack_t *head = NULL;

	/**
	 * Unlike previous projects, this project's instructions
	 * specifically state only 1 argument allowed. No more, no less
	 */
	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	global_head = &head;
	/**
	 * Go to read_file.c
	 */
	read_file(argv[1], &head);
	atexit(free_them_all);
	exit(EXIT_SUCCESS);
}

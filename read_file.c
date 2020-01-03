#include "monty.h"

void read_file(char *file_name)
{
  FILE *fp;
  stack_t *head;
  char *command = NULL;
  size_t len = 0;
  int string;
  unsigned int count = 0;

  fp = fopen(file_name, "r");
  if (!fp)
    {
      printf("Error: Can't open file %s\n", file_name);
      exit(EXIT_FAILURE);
    }

  head = NULL;

  while ((string = getline(&command, &len, fp)) != -1)
    {
      command = strtok(command, DELIMIT);
      count++;

      if (command != NULL)
	line_interpreter(&head, command, count);
    }

  free(head);
  head = NULL;
  fclose(fp);
}

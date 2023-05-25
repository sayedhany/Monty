#include "monty.h"

/**
 * main - monty interpreter
 * @ac: the number of arguments
 * @av: the arguments
 * Return: void
 */
int main(int ac, char *av[])
{
	stack_t *stack = NULL;
	static char *string[1000] = {NULL};
	int n = 0;
	FILE *file;
	size_t bufsize = 1000;
	
	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(av[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}
	for (n = 0; getline(&(strint[n]), &bufsize, fd) > 0; n++);
	execute(string, stack);
	free_list(string);
	fclose(file);
	return (0);
}

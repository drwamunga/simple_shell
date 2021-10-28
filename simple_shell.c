#include "main.h"
/**
*main - Write a UNIX command line interpreter
*@ac: argument count
*@av: argument vector
* Return: the last command executed
*/
int main(int ac, char **av)
{
	int return = 0;
	int *exec_return;
	char *prompt = "$";
	char *newline = "\n";

	*exec_return = 0;
	while (1)
	{
		write(STDOUT FILE_NO, prompt, 2);
		if (ret == END_OF_FILE || ret == EXIT)
		{
			if (ret == END_OF_FILE)
				write(STDOUT FILE_NO, newline, 1);
		}
	}
	return (exec_return);
}

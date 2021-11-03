#include "newshell.h"
/**
 *main - writes a unix command interpreter
 *Return: value of last executed command
 */
int main(void)
{
	char prompt[] = "#cisfun$ ";
	char *str = NULL;
	size_t SIZE;
	char *newline = "\n";
	ssize_t str_len = 0;

	while (str_len >= 0)
	{
		if (isatty(STDIN_FILENO))
			write(1, prompt, strlen(prompt));
		str_len = getline(&str, &SIZE, stdin);
		if (str_len == -1)
		{
			if (isatty(STDIN_FILENO))
				write(1, newline, stdin);
			break;
		}
	}
	return (0);
}

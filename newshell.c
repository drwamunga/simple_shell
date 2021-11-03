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
	char *cmd;
	pid_t pid;
	char *argv[] = {NULL};
	char *envp[] = {NULL};

	while (1)
	{
		write(1, prompt, strlen(prompt));
		if (getline(&str, &SIZE, stdin) == -1)
		{
			if (feof(stdin))
			{
				write(1, newline, strlen(newline));
			}
			else
			{
				perror("Error");
				exit(0);
			}
		}
		cmd = str;
		pid = fork();
		if (pid == -1)
			perror("Error");
		else if (pid == 0)
		{
			if (execve(cmd, argv, envp) == -1)
				perror("Error");
		}
		else
			wait(NULL);
	}
	return (0);
}

#include "newline.h"
/**
 *exec - Executes a command
 *@cmd: the command to execute
 *@flags: the flags to the command
 *Return: A integer value
 */
int exec(char *cmd, char **flags)
{
	pid_t process;
	int status;

	switch (process = fork())
	{
		case -1:
			perror("Error");
			return (-1);
		case 0:
			execve(cmd, flags, envp);
		default:
			do {
				waitpid(process, &status, WUNTRACED);
			} while (WIFEXITED(status) == 0 && WIFSIGNALED(status) == 0);
	}
	return (0);
}

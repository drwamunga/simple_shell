#include "newshell.h"
/**
  *prompt - prints & for prompt
  *Return: void
  */
void prompt(void)
{
	if (isatty(STDIN_FILENO))
	{
		WRITE(1, "$ ", 2);
	}
}

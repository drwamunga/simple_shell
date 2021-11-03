#ifndef NEWSHELL_H
#define NEWSHELL_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

int exec(char *cmd, char **flags);

#endif /* NEWSHELL_H */

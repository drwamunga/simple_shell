#include <stdio.h>
/**
*main - prints the number or arguments passed to it
*@argc: contains size of array
*@argv: contains size of argc
*
* Return: 0
*/
int main(int argc, char __attribute__((unused)) **argv)
{
	printf("%d\n", argc - 1);

		return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Entry point
 * Return: Always 1 (Success)
 * main - Prints "and that piece of art is useful" - Dora Korpar, 2015-10-19"
 *
 *
 * Return: Always 1.
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful
			\" - Dora Korpar, 2015-10-19\n", 59);
	write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      59);

	return (1);
}

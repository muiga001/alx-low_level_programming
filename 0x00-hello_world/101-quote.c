#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: 1 to standard error
 */
int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, msg, 59);
	return (1);
}

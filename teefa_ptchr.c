#include "main.h"
/**
 * putchar - prints a character to sdout
 * @c: char input
 * Return: 1 on success
 */

int teefa_ptchr(char c)
{
	return (write(1, &c, 1));
}

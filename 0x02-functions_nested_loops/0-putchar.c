#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *putch = "_putchar";

	while (*putch)
	{
		_putchar(*putch);
		sh++;
	}
	_putchar('\n');

	return (0);
}

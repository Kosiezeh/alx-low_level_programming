#include <stdio.h>
#include main.h

/**
 * _putchar - writes the character c to stdout
 * main.c: The character to print is _putchar
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	char message[] = "_putchar";

	int start;

	int stopper =80;

	for(start =0; start < stopper; start++);
	{
		putchar(message[s]);
	}
	putchar("%s\n");

	return (write(1, &c,1));

}

#include "main.h"
#include <unistd.h>

/**
 * for_int - prints an integer to std output
 * @i: the list of arguments to pull an integer
 * from
 * Return: Nothing
 */
void for_int(va_list i)
{
	int m = va_arg(i, int);

	print(m);
}
/**
 * print- prints a number to the standard output
 * @m:number to print
 * Return:nothing
 */

void print(int m)
{
	char d;

	if (m < 0)
	{
		char sign = '-';

		write(1, &sign, 1);
		m = -m;
	}
	if (m / 10)
		print(m / 10);
	d = m % 10 + '0';
	write(1, &d, 1);
}
/**
 * for_char - prints a character to the standard output
 * @c: list of arguments
 * Return:nothing
 */
void for_char(va_list c)
{
	char character = va_arg(c, int);

	write(1, &character, 1);
}
/**
 * for_string - accept list of arguments and fetch and print to
 * stdout
 * @s: list of arguments
 * Return:Nothing
 */
void for_string(va_list s)
{
	char *m = va_arg(s, char *);
	int i;

	i = 0;
	while (m[i])
	{
		write(1, &m[i], 1);
		i++;
	}
}


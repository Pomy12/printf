#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
/**
 * _printf - prints a given characters
 * @format: specify the format of argument given
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, j, count;
	va_list args;
	handle m[4] = {{'i', for_int},
		{'c', for_char},
		{'s', for_string},
		{'d', for_int}
		};



	i = j = 0;
	count = 0;
	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; j < 3; j++)
			{
				if (format[4] == m[j].h)
				{
					m[j].f(args);
				}
			}

		}
		else
		{
			write(1, &format[i], 1);
		}
		count++;
		i++;
	}
	va_end(args);
	return (count);

}




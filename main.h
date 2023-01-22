#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _printf(const char *format, ...);
/**
 * struct handles - a structure to mach format specifier with its function
 * @h:format specifiers
 * @f:pointer to a function to handle the identifiers
 */
struct handles
{
	char h;
	void (*f)(va_list m);
};
typedef struct handles handle;
void for_char(va_list c);
void for_int(va_list i);
void for_string(va_list s);
void print(int m);

#endif /* for #ifndef */

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything based on the format string.
 * @format: The format string containing the types of arguments.
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *separator = "";
char current_format;

va_start(args, format);

while (format && format[i])
{
current_format = format[i];

switch (current_format)
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
break;
case 'f':
printf("%s%f", separator, va_arg(args, double));
break;
case 's':
separator = va_arg(args, char *);
if (separator == NULL)
separator = "(nil)";
printf("%s%s", separator, va_arg(args, char *));
break;
default:
break;
}

separator = ", ";
i++;
}

va_end(args);

printf("\n");
}

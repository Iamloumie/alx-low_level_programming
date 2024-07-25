#include "variadic_functions.h"

/**
 * print_all - prints all arguments of data types
 * @format: all types of arguments passed
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *sep = "";
	char *str;

	va_start(ap, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(ap, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (!str)
				{
					str = "(nil)";
				}
				printf("%s%s", sep, str);
				break;
			default:
				i++;
			continue;
		}
		sep = ", ";
		i++;
	}
	putchar('\n');
	va_end(ap);
}

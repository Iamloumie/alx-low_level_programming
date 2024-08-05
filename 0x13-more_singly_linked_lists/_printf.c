#include "main.h"
#define BUFFER_SIZE 1024
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char *format, ...)
{
	print p[] = {
		{"%%", spec_37}, {"%b", bin_spec}, {"%c", c_spec}, {"%d", d_spec},
		{"%i", i_spec}, {"%X", HEX_spec}, {"%x", hex_spec}, {"%o", o_spec},
		{"%r", rev_str_spec}, {"%R", rot13_spec}, {"%s", str_spec}, {"%u", u_spec},
		{"%p", ptr_spec}, {"%S", excl_str}, {"%lX", lng_HEX}, {"%hX", sht_HEX},
		{"%lu", lng_uns}, {"%lo", lng_o}, {"%ho", sht_o}, {"%li", lng_i},
		{"%hi", sht_i}, {"%hd", sht_d}, {"%ld", lng_d}
	};
	va_list args;
	int i = 0, j, length = 0, buffer_index = 0;
	char buffer[BUFFER_SIZE];

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	while (format[i] != '\0')
	{
		for (j = 22; j >= 0; j--)
		{
			if ((p[j].str[0] == format[i]) && (p[j].str[1] == format[i + 1]))
			{
				length += flush_buffer(buffer, &buffer_index);
				length += p[j].spec(args);
				i = i + 2;
				break;
			}
		}
		if (j < 0)
		{
			length += buffer_char(format[i], buffer, &buffer_index);
			i++;
		}
	}
	length += flush_buffer(buffer, &buffer_index);

	va_end(args);
	return (length);
}

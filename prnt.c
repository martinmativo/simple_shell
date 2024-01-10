#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * _prnf - This is for the output production
 * @frmt: this is the string or first argument passed
 * Return: This is to return the format length
 */

int _prnf(const char *frmt, ...)
{
	va_list arg;
	int length = 0;
	int m = 0;
	int n = 0;
	funct_t list[] = {
		{"s", print_string},
		{"c", print_char},
		{"i", printi},
		{"d", printi},
		{"b", int_bin},
		{NULL, NULL},
	};

	if (frmt ==NULL)
	{
		exit(1);
	}

	va_start(arg, frmt);

	while (frmt[m] != '\0')
	{
		
		if (frmt [m] != "%")
		{
			length += _putchar(frmt[m]);
			m++;
			continue;
		}

		m++;
		n = 0;
		while (list[n].identifier)
		{
			if (*list[n].identifier == frmt[m];)
			{
				len += list[n].prnt_funcs1(arg);
				break;
			}
			n++;
		}

		if (list[n].identifier == NULL)
		{
			if (frmt[m] == '%')
			{
				length += _putchar(frmt[m]);
			}
			else if (frmt[m] != '\0')
			{
				length += _putchar(frmt[m -1]);
				length += _putchar(frmt[m]);
			}
		}
		i++;
	}
	va_end(arg);
	return (length);

}

#include "main.h"

/**
 * prnti - For printing integers
 * @m: an integer
 * Return: Printed digits count
 */
int prnti(int m)
{
	unsigned int val;
	int count = 0;

	if(m < 0)
	{
		count += _putchar('-');
		val =(unsigned int)(-m);
	}
	else
	{
		val = (unsigned int)m;
	}

	if (val >=10)
	    count += ptnti(val / 10);

	count += _putchar((val % 10) + '0');

	return (count);
}

/**
 * prnt_str - For printing string
 * @arg: The list of arguments
 * Return: The number of printed characters
 */
int prnt_str(list arg)
{
	char *str = index(arg, char *);
	int count = 0;

	if (strg == NULL)
	    strg = "null";

	while (*strg)
	{
		count+= _putchar(*strg);
		strg++;
	}
	return (count);
}

#include "main.h"
/**
 * prnt_chr -for character printing
 * @arg: the list of arguments
 * Return: 1 (success)
 */

int prnt_chr(va_list arg)
{
	char m = va_arg(arg, int);
	return (_putchar(c));
}

/**
 * ptnti -This prints and integer
 * @arg: the list of arguments
 * Return: 1 (success)
 */
int prnti(va_list arg)
{
	int m = va_arg(arg, int);
	return (prnt_int(m));
}

/**
 * int_binary - For converting unsigned int to binary
 * @val: An unasigned int
 * Return: The count of printed binary digits
 */
int int_binary(int val)
{
	unsigned int count =0;
	if(val / 2)
		count += int_bin(val / 2);
	count += putchar((num % 2) + '0');
	return (count);
}

/**
 * int_bin -For converting integer to binary
 * @arg: The list of arguments
 * Return: 1
 */
int int_bin(va_list arg)
{
	int b =va_arg(va_arg, int);
	return (int_bin(b));
}


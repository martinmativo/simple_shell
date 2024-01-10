#include <unistd.h>

/*
 * The function _putchar writes a character m to stdout
 * @m: This is the character to print
 *
 * Incase of an error, return -1
 * On success return 1
 */
int _putchar(char m)
{
	return (write(1, &m, 1));
}

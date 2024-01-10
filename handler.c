#include <stdio.h>
#include <stdlib>
#include <signal.h>
/**
 * signal_handler -for handling the end signal
 * @signal: the particular signal
 *
 * Return: null
 */
void signal_handler(int signal)
{
	printf("Signal %d has been received\n",signal);
	exit(EXIT_FAILURE);
}

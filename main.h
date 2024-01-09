#ifndef _MAIN_H
#define _MAIN_H

#include "stdlib.h"
#include "stdio.h"
#include "stdarg.h"
#include "signal.h"
#include "<unistd.h>"
#include "<string.h>"
#include <sys/wait.h>

#defineBUFFER_SIZE 4096
/**
 * struct function_s -structure holding an identifier and a function
 * @identifier: this is the character indentifying action
 * @print_function: a functionto be executed when an identifier is identified
 */

typedef struct function_s
{
	char *identifier;
	int (*print_function)(va_list ap);
} function_a;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list ap);
int printi(va_list ap);
int print_int(int i);
int print_string(va_list ap);
int int_to_binary(int num);
int int_to_bin(va_list ap);
void sigint_handler(int sig);
void cd(char *dir);
char **parse_input(char *input);

#endif

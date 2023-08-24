#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>
#include <string.h>
/**
 * struct type - for specifiers
 * @spec: contains parameter
 * @f: funtction pointer to specifiers
 *
 */
typedef struct type
{
	char spec;
	int (*f)(va_list);
} op_t;
int _printf(const char *format, ...);
int print_percent(va_list list_format);
int my_put(va_list list_format);
int string_lit(va_list list_format);
#endif

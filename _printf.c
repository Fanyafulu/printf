#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
* _printf - Printf function
* @format: format.
* Return: Printed chars.
*/

int _printf(const char *format, ...)
{
int i = 0, length = 0, j = 0;
length = string_length(format, j);
va_list args;
va_start(args, format);

while (i < length)

{
if (format[i] != '%')
{
write_char(format[i]);
} else
{
i++;
switch(format[i])
{
case 'd':
{
int x = va_arg(args, int);
write_char(x + '0');
}
}
}
i++;
}
va_end(args);
return (0);
}

/**
* print_buffer - Prints the contents of the buffer if it exist
* @buffer: Array of chars
* @buff_ind: Index at which to add next char, represents the length.
**/

void print_buffer(char buffer[], int *buff_ind)

{
if (*buff_ind > 0)
write(1, &buffer[0], *buff_ind);
*buff_ind = 0;
}

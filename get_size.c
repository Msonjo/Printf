#include "main.h"
/**
 * get_size - Calculates the size to cast the argument
 * @format: Formatted string to print the arguments
 * @i: List of arguments to be printed.
 * Return: Precision.
 */
int get_size(const char *format, int *i)
{
        int cur_k = *i + 1;
        int size = 0;

        if (format[cur_k] == 'l')
                size = S_LONG;
        else if (format[cur_k] == 'h')
                size = S_SHORT;

        if (size == 0)
                *i = cur_k - 1;
        else
                *i = cur_k;

        return (size);
}

#include "main.h"
#include <stdio.h>

/**
 *main - check the code for Holberton School students
 *print_to_98 - Prints all natural numbers from n to 98
 * @n: the integer where the count will begin
 * Return: nothing
 */

void print_to_98(int n)
{
while (n < 98 )
{
	printf("%i, ",n);
	n++;
}
while ( n > 98 )
{
	printf("%i, ",n);
	n--;
}
printf("98");
printf('\n');
}


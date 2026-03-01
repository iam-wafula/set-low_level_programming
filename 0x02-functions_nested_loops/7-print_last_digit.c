#include "main.h"

int print_last_digit(int n)
{
	int d = _abs(n % 10);

	_putchar('0' + d);

	return (d);
}

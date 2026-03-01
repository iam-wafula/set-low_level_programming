#include "main.h"

void times_table(void)
{
	int r, c, n;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			n = r * c;

			if (c != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (n < 10)
				_putchar(' ');

			if (n >= 10)
			{
				_putchar('0' + (n / 10));
			}

			_putchar('0' + (n % 10));
		}

		_putchar('\n');
	}
}

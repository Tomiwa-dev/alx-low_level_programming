#include "main.h"
/**
 * jack_bauer - jack_bauer block
 * Description: prints every minute of the day of Jack Bauer
 * Returns : void
 */
void jack_bauer(void)
{
	int h1;
	int h2;
	int m1;
	int m2;
	int a = 9;

	h2 = 0;
	while (he <= 2)
	{
		if (h2 == 2)
		{
			a = 3;
		}
		h1 = 0;
		while (h1 <= a)
		{
			m2 = 0;
			while (m1 <= 9)
			{
				_putchar('0' + h2);
				_putchar('0' + h1);
				_putchar(':');
				_putchar('0' + m2);
				_putchar('0' + m1);
				_putchar('\n');
				m1++;
			}
			m2++;
		}
		h1++;
	}
	h2++;
}
}


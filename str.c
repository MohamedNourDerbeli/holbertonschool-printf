#include "main.h"
int str(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c == NULL)
		{
			c = "(null)";
			_putchar(c[i]);
		}
		else
			_putchar(c[i]);
	}

	return (i);
}

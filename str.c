#include "main.h"
int puss(char *c)
{
	int i;
	if (c)
	{
		for (i = 0; c[i] != '\0'; i++)
		{
			_putchar(c[i]);
		}
	}
	return (i);
}

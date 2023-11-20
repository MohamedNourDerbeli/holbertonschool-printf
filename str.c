#include "main.h"
int str(char *c)
{
	int i;
	if (c)
	{
		for (i = 0; c[i] != '\0'; i++)
		{
			if (c== NULL)
			{
				return("(null)");
			}
			_putchar(c[i]);
		}
	}
	return (i);
}

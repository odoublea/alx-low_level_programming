/*This program prints and returns 0*/
#include "main.h"

int main(void)
{
	char str[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return (0);
}

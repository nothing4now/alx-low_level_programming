#include"main.h"

/**
 * main 7yEntry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
*t/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ++ch)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}

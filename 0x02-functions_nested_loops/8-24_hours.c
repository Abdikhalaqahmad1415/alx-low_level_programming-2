#include "main.h"
/**
 * void jack_bauer - function that prints every minute of the day of Jack Baue
 * h = hour, m = minutes
 * Return: Always success
 */
void jack_bauer(void)
{

int h, m;
for (h = m; h < 24; h++)
{
for (m = 0; m < 60; m++)
{
_putchar((h / 10) + '0');
_putchar((h % 10) + '0');
_putchar(':');
_putchar((m / 10) + '0');
_putchar((m % 10) + '0');
_putchar('\n')
}
}
}

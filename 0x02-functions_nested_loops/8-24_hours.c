#include "main.h"

/**
 * jack_bauer - time
 * Return: void
 */

void jack_bauer(void)
{
int hour = 0;
int hour1;
int hour2;
int min = 0;
int min1;
int min2;
while (hour != 24)
{
hour1 = hour / 10;
hour2 = hour % 10;
min1 = min / 10;
min2 = min % 10;
_putchar(48 + hour1);
_putchar(48 + hour2);
_putchar(58);
_putchar(48 + min1);
_putchar(48 + min2);
_putchar(10);
if (min == 59)
{
min = 0;
hour++;
}
else
{
min++;
}
}
}

#include "main.h"

/**
 * _atoi - prints the integer value of the first,
 * encounterd integer
 *
 * @str: pointer to the string
 *
 *Return: the integer
 */
int _atoi(char *str)
{
int index = 0;
int countNegatives = 0;
int result = 0;
int length = 0;
int foundDigit = 0;

while (*(str + length) != '\0')
length++;

for (index = 0; index < length && foundDigit == 0; index++)
{
if (*(str + index) == '-')
countNegatives++;

if (*(str + index) >= '0' && *(str + index) <= '9')
{
int digit = *(str + index) - '0';

if (countNegatives % 2)
digit = -digit;
result = result * 10 + digit;
foundDigit = 1;
if (*(str + index + 1) < '0' || *(str + index + 1) > '9')
break;
foundDigit = 0;
}
}

if (foundDigit == 0)
return (0);

return (result);
}

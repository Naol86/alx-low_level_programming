#include "main.h"

/**
 * rev_string - reversing string by using a pointer
 * @s: char
 */

void rev_string(char *s)
{
int Max;
Max = 0;
while (*(s + Max) != '\0')
{
Max++;
}
int Min;
Min = 0;
Max--;
while (Min < Max)
{
char temp = *(s + Min);
*(s + Min++) = *(s + Max);
*(s + Max--) = temp;
}
}

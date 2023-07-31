#include "main.h"
/**
 * _strstr - return the first occurence to the pointer
 *@haystack: the array
 *@needle: charcter that is searched
 *Return: the pointer to the occurence to the first word
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0;
int j = 0;
int k = 1;

while (haystack[i] != '\0')
{
if (haystack[i + (k - 1)] == needle[j])
{
while (needle[j + k] != '\0')
{
if (haystack[i + k] != needle[j + k])
{
break;
}
k++;
}
if (needle[j + k] == '\0')
{
return (haystack + i);
}
}
i++;
}
return (0);
}

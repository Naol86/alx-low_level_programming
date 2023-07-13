#include <stdio.h>
/**
 * main - size
 * Return: 0
 */
int main(void)
{
char char_size;
int int_size;
long int long_int_size;
long long int long_long_int_size;
float float_size;

printf("Size of a char: %zu byte(s)\n", sizeof(char_size));
printf("Size of an int: %zu byte(s)\n", sizeof(int_size));
printf("Size of a long int: %zu byte(s)\n", sizeof(long_int_size));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long_long_int_size));
printf("Size of a float: %zu byte(s)\n", sizeof(float_size));
return (0);
}

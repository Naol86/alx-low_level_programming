#include <stdio.h>

int _isalpha(int c)
{
    if ((c>96 && c<123) || (c>64 && 91)){
        return (1);
    }
    return (0);
}

int main(void)
{
    _islower(12);
    return (0);
}
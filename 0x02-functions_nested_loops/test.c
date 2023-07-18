#include <stdio.h>

int _islower(int c){
    int a;
    a = islower(c);
    
    if (a==0){
        return (0);
    }

    return (1);
}

int main(void)
{
    _islower(12);
    return (0);
}
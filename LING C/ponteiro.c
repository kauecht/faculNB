#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    a = 5;
    b = a; //por valor
    printf("\n a = %d, b = %d", a, b);

    a = b = 5;
    a = 8;
    printf("\n a = %d, b = %d", a, b);

    

}
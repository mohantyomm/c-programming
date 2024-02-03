#include <stdio.h>

int main()
{
    int a = 4;
    int *b = &a;
    printf("The adress of variable a is %u \n", b);
    printf("The value of the variable a is %d \n", *b);
    return 0;
}
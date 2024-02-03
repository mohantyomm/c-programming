#include <stdio.h>

int main()
{
    int a;
    printf("enter the value of a \n");
    scanf("%d", &a);
    // one liner if else statement.
    (a < 5) ? printf("A is less than 5") : printf("A is not less than 5");
    return 0;
}
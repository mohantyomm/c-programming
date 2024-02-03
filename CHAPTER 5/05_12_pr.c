#include <stdio.h>

int main()
{
    int a;
    printf("enter the value of a");
    scanf("%d", &a);

    printf("%d %d %d %d %d", a, ++a, ++a,++a, a++);
    return 0;
}
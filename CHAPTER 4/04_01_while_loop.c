#include <stdio.h>

int main()
{
    int i;
    printf("enter the value of i \n");
    scanf("%d", &i);
    while (i < 10)
    {
        printf("value is %d \n", i);
        ++i;
       
    }
    return 0;
}
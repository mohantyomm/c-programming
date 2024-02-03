#include <stdio.h>

int main()
{
    int a = 0;
    do
    {
        printf("the value is %d \n", a);
        a++;
        if (a > 5)
        {
            break;
        }
    } while (a < 10);
    return 0;
}
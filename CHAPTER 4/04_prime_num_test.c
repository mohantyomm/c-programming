#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of n \n");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("the given number %d is not a prime number \n", n);
            break;
        }
        else
        {
            printf("the given number %d is a prime number \n", n);
            break;
        }
    }
    if(n==2)
    printf("2 is a prime number");
    return 0;
}

#include <stdio.h>
int factorial(int x);
int main()
{
    int a;
    printf("enter the value of a :");
    scanf("%d", &a);
    printf("The factorial of %d is %d", a, factorial(a));
    return 0;
}
int factorial(int x)
{
    printf("calling factorial(%d) \n",x);
    if (x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}
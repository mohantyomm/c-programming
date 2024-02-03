#include <stdio.h>

int fibonacci(int num);
int main()
{
    int num;
    int result;
    printf("the value of num : \n");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Fibonacci of negative is not possible");
    }
    else
    {
        for (int i =0;i<=num;i++)
        {
            result = fibonacci(i);
            printf("%d \n",result);
        }
    }

    return 0;
}

int fibonacci(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return (fibonacci(num - 1) + fibonacci(num - 2));
    }
}

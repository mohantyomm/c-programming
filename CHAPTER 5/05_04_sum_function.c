#include <stdio.h>
int sum(int a, int b);//function prototype.
int main()
{
    int result;
    result = sum(2, 5);//function call.
    printf("the value of result is %d", result);
    return 0;
}
int sum(int a, int b)//function defination.
{
    int result = a + b;
    return result;
}
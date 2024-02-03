#include <stdio.h>

int main()
{
    int i;
    printf("enter the value of i \n");
    scanf("%d", &i);
    do
    {
        printf("the value is %d \n", i);
        i++;
    } while (i < 30);
    return 0;
}
// do while loop main worlk is to run the program atleast for 
// 1 time whether it satisfy or not to the condition.
// if satisfy then it will continue as long as it satisfy.
// else it will terminate after one line.
// if we put i value '104' then output run only one line value is 104
// then it will stop as 104 is greater than 10.
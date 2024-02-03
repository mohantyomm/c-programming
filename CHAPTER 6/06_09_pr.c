#include <stdio.h>
void change(int a)
{
    a = 40 * a;
}
int main()
{
    int a = 40;
    printf("The value of a before change is %d\n", a);
    change(a);
    printf("The value of a after change is %d \n", a);
    return 0;
}
// from this code we verify that change the 
// value of of main
// function cant be possible when it is 
// done by call by value method
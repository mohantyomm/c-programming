#include <stdio.h>
#include <math.h>
void display();//function prototype here.
int main()
{
    int a;
    printf("enter the value of a \n");
    scanf("%d ", &a);
    printf("the exponiantion of 2 to the power 3 is %f \n", pow(a, 3));
    display();//function call.
    printf("Display function finish its work \n");

    return 0;
}

// Function definition
void display()
{
    printf("this is display \n");
}
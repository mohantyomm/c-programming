// basics things about c
#include <stdio.h>

int main()
{
    int a = 5;
    printf("value of a is %d \n", a++);

    printf("value of a is %d \n", a++);
    a;
    printf("value of a is %d \n", a);
    return 0;
}
// post increment print the realvalue but it raise the value 1 after it.
// first a++ statement print 5 but it incremented as 6;
// same things on 2nd printf line a++ print 6 value and assighn it to 7 for further
// now the a value becomes 6.
// imp point is argument passed from right to left .
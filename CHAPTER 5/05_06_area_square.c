#include <stdio.h>
#include <math.h>
int main()
{
    int side;
    printf("Enter the side of the square : \n");
    scanf("%d", &side);
    printf("The area of the square is %f cm^2 \n", pow(side, 2));
    return 0;
}
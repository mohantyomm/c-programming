#include <stdio.h>
void swap(int *a, int *b);
// void wrong_swap(int a,int b);
int main()
{
    int x = 3, y = 4;
    printf("The value of x and y before swap is %d and %d \n", x, y);
    swap(&x, &y);
    // wrongswap(x,y);This is notta gonna work beacuse of call by value.
    printf("The value of x and y after swap is %d and %d", x, y);
    return 0;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
// void wrong_swap(int a,int b){
//     int temp;
//     temp =a;
//     a=b;
//     b=temp;
// }
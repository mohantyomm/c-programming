#include <stdio.h>
void sumAndAvg(int a, int b, int *sum, float *Avg)
{
    *sum = a + b;
    // *Avg = (float)(a + b) / 2;this is also true.
    *Avg = (float)(*sum) / 2;
}
int main()
{
    int i, j, sum;
    float Avg;
    i = 2;
    j = 3;
    sumAndAvg(i, j, &sum, &Avg);
    printf("the value of sum is %d \n", sum);
    printf("The value of avg is %f \n", Avg);
    return 0;
} 
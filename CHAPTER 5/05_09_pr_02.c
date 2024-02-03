#include <stdio.h>
float temp(float celsius);
int main()
{
    float celsius;
    printf("enter the temp in celsius \n");
    scanf("%f", &celsius);
    printf("%f celsius = %f farhenite \n", celsius, temp(celsius));
    return 0;
}
float temp(float celsius)
{

    float farhenite;
    farhenite = (celsius * 9/5)+32;
    return farhenite;
}
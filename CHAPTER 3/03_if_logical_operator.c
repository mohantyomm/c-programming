#include <stdio.h>

int main()
{
    int age;
    int vippass=0;
    // vippass=1;
    printf("enter the person age \n");
    scanf("%d", &age);
    if ((age >= 18 && age <= 70) || (vippass==1))
    {
        printf("the person is eligible for driving \n");
    }
    else
    {
        printf("the person is not eligible for driving\n");
    }
    
    return 0;
}
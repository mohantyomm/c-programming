#include <stdio.h>
#include <math.h>

int main()
{
    int a = 4;
    int b = 8;
    

    printf("the value of  a + b is : %d \n", a + b);
    printf("the value of  a - b is : %d \n", a - b);
    printf("the value of  a * b is : %d \n", a * b);
    printf("the value of  b / a is : %d \n", b / a);


    int z ;
    z = a * b;//legal
    // a*b=z illegal because her assignment operator equal giving instruction
    // to the compiler to assign value of z as a*b.which is not possible.
    printf("the value of z is %d \n",z);

    printf("when 5 is divided by 2 leaves remainder %d \n",5%2);
    printf("when -5 is divided by 2 leaves remainder %d \n",-5%2);
    printf("when 5 is divided by -2 leaves remainder %d \n",5%-2);

    // no operator is assumed to be present
    // printf("the value of 5 * 2 %d \n",(5)(3)); its illegal
    printf("the value of 5 * 2 is %d \n",5*2);//it is legal
    printf("the value of 2 to the power 5 is %f \n",pow(2 , 5));
    // there is no such operators to do exponiention
    // we have to use <math.h> as lability function, must use %f because its return double.
    printf("the value of 5 + 6 is %d \n",5 + 6);
    printf("the value of 5.2 + 6 is %f \n",5.2 + 6);
    printf("the value of 5.2 + 6.3 is %f \n",5.2 + 6.3);
    return 0;
}
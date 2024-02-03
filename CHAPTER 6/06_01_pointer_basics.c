#include <stdio.h>

int main()
{
    int a = 32;
    int *ptr = &a; // Here now ptr goona store the address of a.
    printf("The value of i is %d\n", a);
    printf("The value of i is %d \n", *ptr);
    printf("The address of i is %u\n", &a);
    // printf("The adress of i is %u\n", ptr);
    printf("The address of ptr is %u\n", &ptr);
    //  The above line gonna show us the
    //  adress at which the adress of 'a' stored
    // technically it shows the adress of ptr.
    printf("The value of ptr is %d \n", *(&ptr));
    return 0;
}
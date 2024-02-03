#include <stdio.h>

int main()
{
    int i = 456;
    int *ptr;
    int **ptr_ptr;

    *ptr = &i;
    ptr_ptr = &ptr;
    printf("The value of i is %d \n", &ptr_ptr);
    return 0;
}
// #include <stdio.h>

// int main()
// {
//     int a = 4;
//     int *b = &a;
//     int **c = &b;
//     printf("The value of a is %d\n", **c);
//     return 0;
// }This is also workable.

// NOTE
// Here ptr stores the address of i 
// where ptr_ptr stores the address of ptr
// so when we call ptr_ptr it goes to the address of ptr 
// then from address of ptr it goes to the address of i 
// where he founds the value of i.
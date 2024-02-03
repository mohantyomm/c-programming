#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int *ptr = &arr[0];
    printf("%d", *(ptr + 2));
    return 0;
}
// from this code  we verify that the pointer 
// which already point to the array indices [0]
// if that pointer incrimented the pointing location also incrimented.
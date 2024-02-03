#include <stdio.h>
// void printarray(int *a, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value for element %d is %d \n", i + 1, *(a + i));
//     } 
// }
void printarray(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value for element %d is %d \n", i + 1, ptr[i]);
    }
    ptr[2] = 555;
}
int main()
{
    int i[] = {1, 2, 3, 4, 5, 6, 7, 8, 910, 1927};
    printarray(&i, 10);
    printf("The value of element 2 is now %d \n", i[2]); // this will change the main value because we
    // give the address of the array sothe function is eligible to change the value of main function.
    return 0;
}

/*here the size of array is only given to
exicute the loop for A GIVEN INSTANCE.

 */
#include <stdio.h>
void printarray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void bubblesort(int *A, int n)
{
    // int issorted = 0;
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        // printf("Working on pass %d \n", i + 1);
        // issorted=1;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {

                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                // issorted = 0;
            }
        }
        // if (issorted)
        // {
            // return;
        // }
    }
}
int main()
{
    int A[] = {12,54,65,7,23,9};
    int n = sizeof(A) / sizeof(int);
    printarray(A, n); // before sorting array printing.
    bubblesort(A, n);
    printarray(A, n); // after sorting arrayprinting .

    return 0;
}
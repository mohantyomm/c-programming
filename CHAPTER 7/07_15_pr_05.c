#include <stdio.h>
int positive(int *arr, int n)
{
    int pos = 0;
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] / 2 == 0)
        {
            pos++;
        }
    }
    printf("%d",pos);
    return pos;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    positive(arr, 10);

        return 0;
}
 #include <stdio.h>
// int linearsearch(int arr[], int size, int element)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == element)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
int binarysearch(int arr[], int size, int element)
{
    int mid, high, low;
    low=0;
    high=size-1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 34, 34132, 34, 135, 434, 1541, 346};
    // int element = 34132;
    // int size = sizeof(arr) / sizeof(int);
    // int searchindex = linearsearch(arr, size, element);
    // this is for unsorted array linearsearch.
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 34, 135, 434, 1541};
    int element = 34;
    int size = sizeof(arr) / sizeof(int);
    int searchindex = binarysearch(arr, size, element);
    if (searchindex == (-1))
        printf("Element is not found on the array");
    else
        printf("The element %d is found on Index %d \n", element, searchindex);

    return 0;
}\


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void linearsearch(int arr[50], int size, int key)
{
    int temp=0;
    for (int i = 0; i < size+1; i++)
    {
        if (arr[i] == key)
        {
            printf("Element is in index %d \n",i);
            temp++;
        }
      
    }
     if(temp==0){
        printf("Element Not found \n");
       } 
}
int main()
{
    
    int num;
    printf("Enter the number of element : \n");
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        printf("Enter the index %d element :\n", i + 1);
        scanf("%d", &arr[i + 1]);
    }
    int key;
    printf("Enter the number you want to search \n");
    scanf("%d", &key);
    int size = sizeof(arr) / sizeof(int);
    linearsearch(arr, size, key);
    return 0;
}
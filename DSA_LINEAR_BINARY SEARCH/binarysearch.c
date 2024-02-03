# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>
int bubblesort(int arr[] ,int size)
{
    int temp =0;
    for(int i =0;i<size-1;i++)
    {
        for(int j =0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1] =temp;
            }
        }
    }
    return arr;
}
int binarysearch(int arr[],int size,int key)
{
    int low,mid,high;
    low =0;
    high= size-1;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            high = mid-1;
        }
        else if (arr[mid]< key)
        {
            low = mid+1;
        }

    }
     
}
int main (){
    int arr[]={2,4,35,344,43,55,6,45,53,532,32};
    int size = sizeof(arr)/sizeof(int);
    int key =6;
    bubblesort(arr,size);
    printf("nowprinting sorted array : \n");
    for(int i = 0;i<size;i++)
    {
        printf("%d \n",arr[i]);
    }
    int x = binarysearch(arr,size,key);
    printf("The key is present in index %d \n",x);
    return 0;
}
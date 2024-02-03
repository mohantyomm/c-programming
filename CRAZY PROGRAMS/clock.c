# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>
# include <time.h>

int linearsearch(int arr[],int size,int key)
{
    for(int i =0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main (){
   
    int arr[]={1,2,3,4,5,6,8,9};
    int size = sizeof(arr)/sizeof(int);
    int key = 8;
    clock_t start = clock();
    int index = linearsearch(arr,size,key);
    clock_t end =clock();
    double time_spent=(double) (end - start)/CLOCKS_PER_SEC ;
    printf("%f",time_spent);
    return 0;
}
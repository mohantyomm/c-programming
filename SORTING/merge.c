# include <stdio.h>
 void merge(int arr[],int first,int mid,int last)
{
    int i,j,k;
    int n1=mid-first+1;
    int n2=last-mid;
    int left[n1],right[n2];

    for(int i=0;i<n1;i++)
    {
    left[i]=arr[first+i];
    }
    for(int j=0;j<n2;j++)
    {
    right[k]=arr[mid+1+j];
    }
    i=0;
    j=0;
    k=first;

    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k]=left[i];
            i++;
        }
        else{
            arr[k]=right[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=right[j];
        j++;
        k++;
    }
}
void mergesort(int arr[],int first,int last)
{
    if(first<last)
    {
        int mid =(first+last)/2;
        mergesort(arr,first,mid);
        mergesort(arr,mid+1,last);
        merge(arr,first,mid,last);

    }
}

void printarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d,",arr[i]);
    }
}
int main (){
    int arr[]={2,3,4,5,7,8,345,345,457,68};
    int size =sizeof(arr)/sizeof(int);
    printarray(arr,size);
    printf("\n");
    mergesort(arr,0,size-1);
    printf("\n");
    printarray(arr,size);
    return 0;
}
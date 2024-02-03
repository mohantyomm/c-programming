// program to chek whether the program is even or odd.
#include <stdio.h>

int main()
{
    int a,b ;
    printf("enter a number \n");
    scanf("%d",&a);
    if(a%2==0){
        printf("%d is a even number \n",a);
    }
    else{
        printf("%d is a odd number",a);
    }
    return 0;
}
# include <stdio.h>

int main (){
    int i =1,f = 1,n ;
    printf("enter the value of n \n");
    scanf("%d ", &n);
    while(i<=n)
    {
     f*=i;
     i++;
     
    }
    printf("the factorial of %d is %d",n,f);
    return 0;
}
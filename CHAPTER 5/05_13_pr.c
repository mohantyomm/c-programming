# include <stdio.h>
void printpattern(int x);
int main (){
    int x;
    printf("Enter the value of x");
    scanf("%d",&x);
    printpattern(x);
    return 0;
}
void printpattern(int x)
{
    if(x==1)
    {
        printf("*\n");
        return;
    }
    printpattern(x-1);
    for (int i = 0; i <(2*x-1); i++)
    {
        printf("*");
    }
    printf("\n");
    
}




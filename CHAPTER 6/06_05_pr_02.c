# include <stdio.h>
void address(int a)
{
    printf("The address of variable a is %u\n",&a);
}
int main (){
    int i=2;
    printf("The address of i is %u \n",&i);
    address(i);
    return 0;
}
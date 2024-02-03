#include <stdio.h>

int main()
{
    int j;
    printf("enter the value of j \n");
    scanf("%d",&j);
    int multi[10];
    for (int i = 0; i < 10; i++)
    {
        multi[i] = j * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        multi[i] = j * (i + 1);
        printf("%d x %d = %d \n",j, i + 1, multi[i]);
    }
    return 0;
}
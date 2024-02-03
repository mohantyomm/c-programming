#include <stdio.h>
#include <stdlib.h>
int main()
{
   int x;
   int *ptr = &x;
   // printf("size of int in my pc is %d\n",sizeof(int));
   ptr = (int *)malloc(6 * sizeof(int));
   for (int i = 0; i < 6; i++)
   {
      printf("Enter the value of  element %d\n", i + 1);
      scanf("%d", &ptr[i]);
   }
   for (int i = 0; i < 6; i++)
   {
      printf("value is %d\n", ptr[i]);
   }
   return 0;
}
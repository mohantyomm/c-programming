# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>

int main (){
    
    int *ptr;
    ptr =(int *) malloc(6*sizeof(int));
     for(int i=0;i<6;i++)
     {
      printf("Enter the value of %d element\n",i+1);
        scanf("%d",&ptr[i]);
     }
     for(int i=0;i<6;i++)
     {
        printf("value is %d\n",ptr[i]);
     }
     //reallocating;
     ptr= realloc(ptr,10*sizeof(int));
    for(int i=0;i<10;i++)
     {
      printf("Enter the value of %d element\n",i+1);
        scanf("%d",&ptr[i]);
     }
     for(int i=0;i<10;i++)
     {
        printf("value is %d\n",ptr[i]);
     }

    return 0;
}
    
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>
 
int main (){
    char st[34]="Omm prakash mohanty";
    // printf("%s \n",st); 
    // int a = strlen(st);
    // printf("%d \n",a);
      /*int i= 0;
     int len = 0;
   while (st[i]!= '\0')
    {
        len++;
        i++;
    }
    printf("The length of tthe string is - %d \n",len);
    *///this is going to work like strlen funtion.....
    // other method
    char *ptr=st;

    int len = 0;
    while(*ptr != '\0')
    {
        len++;
        ptr++;
    }
    printf("The length of the string is = %d \n",len);
    
    return 0;
}
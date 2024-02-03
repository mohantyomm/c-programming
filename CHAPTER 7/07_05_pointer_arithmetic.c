# include <stdio.h>

int main (){
    // int i=34;
    // int *ptr=&i;
    // printf("The vaule of ptr is %u\n",ptr);
    // ptr++;
    // ptr++;
    // ptr++;
    // ptr++;
    // ptr--;
    // ptr--;
    
    // printf("The value of ptr is %u\n",ptr);
    char c =34;
    char *ptr=&c;
    printf("The value of ptr is %u \n",ptr);
    ptr++;
    printf("The value of ptr is %u \n",ptr);
    return 0;
}
/* This code will show the adress of the type variables and 
 also show , after incrementation what was its address
 and how much byte it got increased after increment.*/
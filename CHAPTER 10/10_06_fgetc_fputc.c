# include <stdio.h>

int main (){
    FILE *ptr;
    // // fgetc demo fo reading a file.
    // ptr = fopen("getcdemo.txt","r");
    // // char c = fgetc(ptr);
    
    // printf("The value of my character is %c\n",fgetc(ptr));
    // printf("The value of my character is %c\n",fgetc(ptr));
    // printf("The value of my character is %c\n",fgetc(ptr));
    // printf("The value of my character is %c\n",fgetc(ptr));
    // printf("The value of my character is %c\n",fgetc(ptr));
    ptr=fopen("yeqiu.txt","w");
    fputc('i',ptr);
    fclose(ptr);
    return 0;
}
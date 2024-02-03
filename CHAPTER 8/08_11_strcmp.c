# include <stdio.h>
# include <string.h>
int main (){
    char *st="follow up";
    char *st1="follow me";
    int val =strcmp(st,st1);
    printf("the compare value is %d ",val);
    return 0;
}
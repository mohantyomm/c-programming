# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>

int main (){
    char st[]="SAERERPALISTIN";
    char st1[50];
    int i = 0;
    // int j = 0;
    while(st[i]!='\0')
    {
        st1[i]=st[i];
        i++;
    }
    printf("%s",st1);
    return 0;
}
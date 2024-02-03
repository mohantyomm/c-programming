# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>

int main (){
    char character;
    printf("Enter the characters : \n");
    scanf("%c",&character);
    int num = character;
    printf("The ascii value of %c is = %d",character,num);
    return 0;
}
#include <stdio.h>
#include <string.h>
// comment out area is only used when we have to took input character by character using format specifier %c.....
int main()
{
    char inputarray[100];
    // char c;
    // int i =0;
    printf("Enter the array -\n");
    scanf("%s", inputarray);
    // while(c!='\n')
    // {
    //     fflush(stdin);
    //     scanf("%c",&c);
    //     inputarray[i]=c;
    //     i++;
    // }
    // inputarray[i-1]='\0';

    char initial[100];

    strcpy(initial, inputarray);

    strrev(initial);
    // (strcmp(inputarray, initial) == 0) ? printf("pallindrome \n") : printf("not pallindrome \n");
    if (strcmp(initial, inputarray) == 0)
    {
        printf("%s is a pallindromic word", inputarray);
    }
    else
    {
        printf("%s is not a pallindromic number\n");
    }
    return 0;
}

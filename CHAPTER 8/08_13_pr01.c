#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    char st[34];
    char st1[34];
    char c;
    int i = 0;
    printf("Enter  the first string : \n");
    gets(st);
    printf("enter the value of second string character by character \n");
    while (c != '\n')
    {
        fflush(stdin);
        scanf("%c", &c);
        st1[i] = c;
        i++;
    }
    st1[i - 1] = '\0';
    printf("The value of st1 is %s\n", st);
    printf("The value of st2 is %s\n", st1);
    int x = strcmp(st, st1);
    if (x == 0)
    {
        printf("Both string is equal \n");
    }
    else
    {
        printf("String are not equal \n");
    }

    return 0;
}
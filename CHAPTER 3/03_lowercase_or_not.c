#include <stdio.h>

int main()
{
    char ch;
    printf("enter the character \n");
    scanf("%c", &ch);
    if (ch >= 97 && ch <= 122)
    {
        printf("it is a lowercase alphabet \n");
    }
    else
    {
        printf("it is not a lower case alphabet");
    }
    return 0;
}
// ascii value for small alphabet is from 97 to 122.
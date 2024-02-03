#include <stdio.h>
#include <string.h>

int main()
{
    char *st = "YE QIU";
    int a = strlen(st);
    printf("The  length of a is %d", a);
    return 0;
}
// char *st= "";either do this or char str[]=""; do this.
// strlen gives the length of string excluding null character.
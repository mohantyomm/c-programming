#include <stdio.h>
#include <string.h>
int main()
{
    char *st = "YE QIU";
    char *st1;
    strcpy(st1, st);
    printf("now st1 become = %s", st1);
    return 0;
}
// strcpy is used to copy a string to another.
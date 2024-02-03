#include <stdio.h>
#include <string.h>
int main()
{
    char st[45] = "i am YE QIU\t";
    char *st1 = "and i am nothing";
    strcat(st, st1);
    printf("%s", &st);
    return 0;
}
// there is no way to add space but you can use \t for a tab like space 
// or simply give some space but in your mind it will enlarge your string size
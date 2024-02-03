#include <stdio.h>

int main()
{
    int securedmark;
    printf("enter the securedmark : \n");
    scanf("%d", &securedmark);
    switch (securedmark / 10)
    {
    case 10:
        printf("your grade is A \n");
        break;
    case 9:
        printf("your grade is A \n");
        break;
    case 8:
        printf("your grade is B \n");
        break;
    case 7:
        printf("your grade is C \n");
        break;
    case 6:
        printf("your grade is D \n");
        break;
    case 5:
        printf("your grade is E \n");
        break;
    case 4:
        printf("your grade is F \n");
        break;

    default:
        printf("you are failed \n");
        break;
        return 0;
    }
}
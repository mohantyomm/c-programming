// # include <stdio.h>
// typedef struct rama{
// int code;
// float salary;
// int exp;

// }me; 
// int main (){
//     struct rama me={8763287,23628,2396128};
//     printf("%d\n",me.code);
//     printf("%f\n",me.salary);
//     printf("%d\n",me.exp);
//     return 0;
// }
 #include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[30];
};


int main()
{
    // int a=34;
    // char b='g';
    // float d=3738.3432;
    // //  employee e1;
    // // e1.salary =34;
    struct employee e1;
    e1.code = 100;
    e1.salary = 34000.67;
    strcpy(e1.name, "YE QIU");
    printf("%d\n", e1.code);
    printf("%f\n", e1.salary);
    printf("%s\n", e1.name);
    return 0;
}
# include <stdio.h>

#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};
int main (){
    struct employee omm  = {100,34.23,"YE QIU"};

    printf("code is : %d\n",omm.code);
    printf("salary is : %f\n",omm.salary);
    printf("name is : %s\n",omm.name); 

    return 0;
}
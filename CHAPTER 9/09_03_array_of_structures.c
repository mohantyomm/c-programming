# include <stdio.h>

#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};
int main (){
    struct employee facebook[100]; 
    facebook[0].code=101;
    facebook[0].salary=101.98;
    strcpy(facebook[0].name,"ye qiu");

    return 0;
}
// this is a convinient method to do.
#include <stdio.h>
#include <string.h>
struct chua
{
    char name[30];
    int age;
    float height;
    float weight;
};
void show(struct chua s)
{
    printf("Chua name-%s\n",s.name);
    printf("age-%d \n", s.age);
    printf("height-%f \n", s.height);
    printf("weight -%f kg \n", s.weight);
}
int main()
{
    struct chua s;
    s.age = 18;
    s.weight = 2.5;
    s.height = 4.2;
    char *ptr;
    ptr=s.name;
    printf("chua name - \n");
    gets(s.name);
    
    show(s);
    return 0;
}

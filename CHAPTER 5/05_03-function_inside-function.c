#include <stdio.h>
void goodmorning();
void goodAfternoon();
void goodNight();
int main()
{
    goodmorning();

    return 0;
}
void goodmorning()
{
    printf("good morning \n");
    goodAfternoon();
}
void goodAfternoon()
{
    printf("good Afternoon \n");
    goodNight();  
}
void goodNight()
{
    printf("good Night \n"); 
}


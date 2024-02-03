# include <stdio.h>

int main (){
    char st[54];
    // char st[]={'o','m','m','\0'};//this method is totally out dated not in my recognition.
    // char st[]="my name is omm";type 1;
    // char *st="my name is ye qiu";type 2;
    // all of the above is up for pre declaration.
    // we cant use scanf for taking multi word string input
    // here is the convinient way for string
    printf("ENter the value of st \n");
    gets(st);
    // puts(st);//this is only used if we just want to print the strings 
    // printf=but this is use to make it convinient.
    printf("%s",st);
    return 0;
}
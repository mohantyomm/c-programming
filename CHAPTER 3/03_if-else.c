
# include <stdio.h>

int main (){
    float vegetableprice;
    printf("enter the price of the vegetable \n");
    scanf("%f",&vegetableprice);
    if(vegetableprice <= 60)
    {
        printf("i should have purchase the vegetable");
    }
    else{
        printf("i shouldn't purchase the vegetable");
    }
    return 0;
}
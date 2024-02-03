# include <stdio.h>

int main (){
    int math, phy , chem ;
    float total;
    printf("enter the secured marks in math \n");
    scanf("%d",&math);
     printf("enter the secured marks in phy \n");
    scanf("%d",&phy);
     printf("enter the secured marks in chem \n");
    scanf("%d",&chem);
    total =(math+phy+chem)/3;
    if((total<40) || (phy<33) || (chem <33) || (math<33))
    {
        printf("your totalpecentage is %f andyou are failed \n",total);
    }
    else{
        printf("your total percentage is %f and you are passed \n",total);
    }
    return 0;
    
}
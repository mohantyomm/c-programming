# include <stdio.h>

int main (){
    int num;
    printf("enter the number \n");
    scanf("%d", &num);
    printf("the divisibility test returns %d \n",num%97);//if remainder returns zero
    // // then it will divisibile by 97.

    // q-4..find oot the vlaue of 3*x/y-z+k .where x =2,y =3,z =3,k=1
    int x =2,y=3,z=3,k=1;
    int result=(3*x/y-z+k);
    // 3*2/3-3+1
    // 6/3-3+1
    // 2-3+1
    // -1+1
    // 0
    printf("the result is %d \n",result);
    return 0;
}
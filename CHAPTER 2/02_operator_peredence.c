# include <stdio.h>

int main (){
 int x = 4;
 int y = 5;
 printf("the value of 8*x - 3*y=%d \n",8*x - 3*y);

//  printf("the value of 8*x / 3*y=%d \n",8*x / 3*y); //here the output showing us is wrong 
 //because c follows a sequence. if there is same priority operator 
 //then it will a tie it follows what comes one after
//  when same priority operator comes we haveto use paranthesis.
 printf("the value of 8*x / 3*y=%d \n",(8*x) / (3*y));//    it will show us right output
    return 0;
}
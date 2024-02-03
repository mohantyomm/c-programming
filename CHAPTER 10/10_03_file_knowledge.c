# include <stdio.h>

int main (){
    // if a file doesn't exhist and it was open by read mode 
    // it will return null.Where as if we the file in 
    // wright mode it will simplye generate a file.
    FILE *ptr;
    ptr=fopen("junior.txt","w");
    //this code simpliy generate a file name junior.txt  .
    return 0;
}
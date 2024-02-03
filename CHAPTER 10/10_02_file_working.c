#include <stdio.h>

int main()
{
    FILE *ptr2;
    ptr2 = fopen("giet.txt", "r"); // as giet.txt file doesn't exhist the fopen gonna to return null.
    if (ptr2 == NULL)
    {
        printf("file doesn't exhist");
    }
    // bythis we can check whether the file exhist or not.
    return 0;
}
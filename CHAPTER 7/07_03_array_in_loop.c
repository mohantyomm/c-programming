#include <stdio.h>

int main()
{
  int marks[5];
  for (int i = 0; i < 5; i++)
  {
    printf("Enter the marks for student %d :", i + 1);
    scanf("%d", &marks[i]);
  }
  for (int i = 0; i < 5; i++)
  {
    printf("The value of marks for student %d is %d \n", i, marks[i]);
  }
  return 0;
}
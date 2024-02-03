#include <stdio.h>
int display(int subject, int student, int marks[student][subject]);
int main()
{
    int student;
    printf("Enter the number of student\n");
    scanf("%d", &student);
    int subject;
    printf("Enter the number ofsubject\n");
    scanf("%d", &subject);
    int marks[student][subject];
    for (int i = 0; i < student; i++)
    {
        for (int j = 0; j < subject; j++)
        {
            printf("Enter the marks for student %d in subject %d \n", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    display(subject, student, marks);
    return 0;
}
int display(int subject, int student, int marks[student][subject])
{
    for (int i = 0; i < student; i++)
    {
        for (int j = 0; j < subject; j++)
        {
            printf("THE marks for student %d in subject %d is %d \n", i + 1, j + 1, marks[i][j]);
        }
    }
}
#include <stdio.h>
int Ackerman(int m, int n);
int main()
{
    int m, n;
    printf("Enter two value:\n");
    scanf("%d%d", &m, &n);
    printf("\n OUTPUT:: %d\n", Ackerman(m, n));
    return 0;
}
int Ackerman(int m, int n)
{
    if (m == 0)
    {
        return n + 1;
    }
    else if (n == 0)
    {
        return Ackerman(m - 1, 1);
    }
    else
    {
        return Ackerman(m - 1, Ackerman(m, n - 1));
    }
}
#include <stdio.h>
int main()
{
    int A, B, C;
    scanf("%d %d", &A, &B);
    C = B;
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", A * (C % 10));
        C /= 10;
    }
    printf("%d", A * B);
}
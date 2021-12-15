#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    while (N)
    {
        printf("%d\n", N);
        N -= 1;
    }
}
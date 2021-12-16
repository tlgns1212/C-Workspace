#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        for (int j = N - 1 - i; j < N; j++)
        {
            printf("*");
        }
        printf("\n");
        // if (i != N - 1)
        // {
        //     printf("\n");
        // }
    }
}
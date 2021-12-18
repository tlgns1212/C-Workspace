#include <iostream>
int main()
{
    printf("!!!");
    int A[1000000], N, min, max;
    scanf("%d", &N);
    printf("!!!");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", A[i]);
    }
    min = A[0];
    max = A[0];
    for (int i = 1; i < N; i++)
    {
        if (min > A[i])
            min = A[i];
        else if (max < A[i])
            max = A[i];
    }
    printf("%d %d", min, max);
}
#include <iostream>
int main()
{
    int A, N, min = 1000001, max = -1000001;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A);
        if (min > A)
            min = A;
        if (max < A)
            max = A;
    }
    printf("%d %d", min, max);
}
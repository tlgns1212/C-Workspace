#include <stdio.h>
int main()
{
    int N, temp, answer, count = 1;
    scanf("%d", &N);
    answer = N;
    while (1)
    {
        temp = (answer / 10) + (answer % 10);
        answer = (answer % 10) * 10 + (temp % 10);
        if (answer == N)
        {
            break;
        }
        count++;
    }
    printf("%d", count);
}
#include <iostream>
using namespace std;

int main()
{
    int N;
    long long sum = 0;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        sum += (N / i)*i;
    }
    cout << sum;

    return 0;
}
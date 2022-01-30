#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, tens = -1, sum, answerInt;
    bool answer = false;
    cin >> M;
    N = M;
    if (N < 11)
    {
        if (N % 2 == 0)
        {
            answerInt = N / 2;
            answer = true;
        }
        else
        {
            answerInt = 0;
            answer = true;
        }
    }
    while (M)
    {
        M /= 10;
        tens++;
    }
    for (int i = N - ((N / (int)(pow(10, tens))) + (9 * tens)); i <= N; i++)
    {
        M = i;
        sum = M;
        while (M)
        {
            sum += M % 10;
            M /= 10;
        }
        if (sum == N)
        {
            answer = true;
            answerInt = i;
            break;
        }
    }
    cout << (answer ? answerInt : 0);
}
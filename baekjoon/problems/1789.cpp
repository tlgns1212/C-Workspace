#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long S, sum = 0;
    int N = 1;

    cin >> S;
    while (1)
    {
        sum += N;
        if (sum > S)
            break;
        N++;
    }
    cout << N - 1;

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, count = -1, maxfive, i;
    cin >> N;

    maxfive = N / 5;
    for (i = maxfive; i != -1; i--)
    {
        if ((N - (i * 5)) % 3 == 0)
        {
            count = i + ((N - i * 5) / 3);
            break;
        }
    }
    cout << count;
}
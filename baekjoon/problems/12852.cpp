#include <iostream>
using namespace std;

int X, dp[1000001], num[1000001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> X;

    for (int i = 1; i <= X; i++)
    {
        dp[i] = i;
    }
    for (int i = 2; i <= X; i++)
    {
        dp[i] = dp[i - 1] + 1;
        if (i % 2 == 0)
            dp[i] = min(dp[i], dp[i / 2] + 1);
        if (i % 3 == 0)
            dp[i] = min(dp[i], dp[i / 3] + 1);
    }
    cout << dp[X] - 1 << '\n';

    cout << X << ' ';
    while (X > 1)
    {
        if (X % 3 == 0 && dp[X / 3] == dp[X] - 1)
        {
            cout << X / 3 << ' ';
            X /= 3;
        }
        else if (X % 2 == 0 && dp[X / 2] == dp[X] - 1)
        {
            cout << X / 2 << ' ';
            X /= 2;
        }
        else
        {
            cout << X - 1 << ' ';
            X -= 1;
        }
    }

    return 0;
}
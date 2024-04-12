#include <iostream>
using namespace std;

long long N, dp[91];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    dp[1] = 1;
    dp[2] = 1;
    for (int i = 3; i <= N; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    cout << dp[N];
    return 0;
}
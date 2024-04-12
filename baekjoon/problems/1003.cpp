#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N;
    cin >> T;
    int dp[44] = {
        0,
    };
    dp[0] = 1;
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 2;
    for (int i = 4; i < 43; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    for (int i = 0; i < T; i++)
    {
        cin >> N;
        cout << dp[N] << ' ' << dp[N + 1] << '\n';
    }

    return 0;
}
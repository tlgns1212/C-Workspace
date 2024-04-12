#include <iostream>
using namespace std;

int N, dp[100001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    dp[0] = 1;
    dp[1] = 3;

    for (int i = 2; i <= N; i++)
    {
        dp[i] = (dp[i - 1] * 2 + dp[i - 2]) % 9901;
    }
    cout << dp[N];

    return 0;
}

// 4
// 41
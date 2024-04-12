#include <iostream>
using namespace std;

int N, P[1001], dp[1001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> P[i];
        dp[i] = P[i];
    }
    for (int i = 1; i <= N; i++)
    {
        for (int j = i; j > 0; j--)
        {
            dp[i] = max(dp[i], dp[i - j] + P[j]);
        }
    }
    cout << dp[N];

    return 0;
}
// 4
// 1 5 6 7

// 10
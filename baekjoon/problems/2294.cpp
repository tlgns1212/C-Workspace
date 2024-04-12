#include <iostream>
using namespace std;
const int MAXNUM = 999999;
int n, k, coins[101], dp[100001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> k;
    for (int i = 0; i <= k; i++)
        dp[i] = MAXNUM;
    dp[0] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];

        int coin = coins[i];
        for (int j = coin; j <= k; j++)
        {
            dp[j] = min(dp[j], dp[j - coin] + 1);
        }
    }
    if (dp[k] == MAXNUM)
        cout << -1;
    else
        cout << dp[k];

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, k, temp;
    cin >> N >> k;
    vector<int> coins(N);
    vector<int> dp(k + 1);
    for (int i = 0; i < N; i++)
    {
        cin >> coins[i];
    }
    dp[0] = 1;
    for (int i = 0; i < N; i++)
    {
        for (int j = coins[i]; j <= k; j++)
        {
            dp[j] += dp[j - coins[i]];
        }
    }
    cout << dp[k];

    return 0;
}
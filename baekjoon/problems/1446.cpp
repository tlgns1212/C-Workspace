#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, D;
    vector<int> dp(10001, 10001);
    vector<pair<int, int>> shortcut[10001];
    cin >> N >> D;

    for (int i = 0; i < N; i++)
    {
        int from, to, len;
        cin >> from >> to >> len;
        shortcut[to].push_back({from, len});
    }

    dp[0] = 0;
    for (int i = 1; i <= D; i++)
    {
        if (shortcut[i].size() == 0)
        {
            dp[i] = dp[i - 1] + 1;
        }
        else
        {
            for (auto v : shortcut[i])
            {
                dp[i] = min(dp[i], min(dp[i - 1] + 1, dp[v.first] + v.second));
            }
        }
    }
    cout << dp[D];

    return 0;
}

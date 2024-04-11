#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    vector<int> A(N + 1);
    vector<int> dp(N + 1);
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
        dp[i] = 1;
    }

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if (A[i] > A[j])
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    sort(dp.begin(), dp.end());
    cout << dp[N];

    return 0;
}
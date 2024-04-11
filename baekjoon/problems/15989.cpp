#include <iostream>
using namespace std;

int T, N, dp[100001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;
    dp[4] = 4;
    dp[5] = 5;
    dp[6] = 7;
    dp[7] = 8;

    while (T--)
    {
        cin >> N;
    }

    return 0;
}
// 3
// 4
// 7
// 10

// 4
// 8
// 24
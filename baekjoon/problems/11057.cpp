#include <iostream>
using namespace std;

int N, dp[1001][10], answer;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 1; i < 10; i++)
    {
        dp[0][i] = 1;
    }
    for (int i = 0; i <= N; i++)
    {
        dp[i][0] = 1;
    }

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % 10007;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        answer += dp[N - 1][i];
    }
    cout << (answer) % 10007;

    return 0;
}
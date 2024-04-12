#include <iostream>
using namespace std;

int N, dp[101][10], answer;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    dp[0][0] = 0;
    for (int i = 1; i < 10; i++)
    {
        dp[0][i] = 1;
    }
    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j == 0)
            {
                dp[i][j] = dp[i - 1][j + 1] % 1000000000;
            }
            else if (j == 10 - 1)
            {
                dp[i][j] = dp[i - 1][j - 1] % 1000000000;
            }
            else
            {
                dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        answer = (answer + dp[N - 1][i]) % 1000000000;
    }
    cout << answer;

    return 0;
}
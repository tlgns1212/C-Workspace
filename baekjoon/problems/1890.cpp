#include <iostream>
using namespace std;

int N, graph[101][101], dp[101][101];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> graph[i][j];
        }
    }

    dp[0][0] = 1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (dp[i][j] == 0 || (i == N - 1 && j == N - 1))
                continue;
            int value = graph[i][j];
            int x = value + j;
            int y = value + i;

            if (x < N)
                dp[i][x] = dp[i][x] + dp[i][j];
            if (y < N)
                dp[y][j] = dp[y][j] + dp[i][j];
        }
    }

    cout << dp[N - 1][N - 1];

    return 0;
}

// 4
// 2 3 3 1
// 1 2 1 3
// 1 2 3 1
// 3 1 1 0

// 3
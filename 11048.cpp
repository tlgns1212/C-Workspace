#include <iostream>
using namespace std;

int N, M, graph[1001][1001], dp[1001][1001];
int dir[3][2] = {{1, 0}, {0, 1}, {1, 1}};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            cin >> graph[i][j];
        }
    }
    for (int y = 0; y <= N; y++)
    {
        for (int x = 0; x <= M; x++)
        {
            for (int i = 0; i < 3; i++)
            {
                int yy = y + dir[i][0];
                int xx = x + dir[i][1];
                if (yy > N || xx > M)
                    continue;
                dp[yy][xx] = max(dp[y][x] + graph[yy][xx], dp[yy][xx]);
            }
        }
    }

    cout << dp[N][M];

    return 0;
}
// 3 4
// 1 2 3 4
// 0 0 0 5
// 9 8 7 6
// 31

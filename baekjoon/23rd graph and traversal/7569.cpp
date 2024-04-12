#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int N, M, H, count, answer, walls;
int tom[101][101][101];
int visited[101][101][101];
int dir[][3] = {{-1, 0, 0}, {1, 0, 0}, {0, -1, 0}, {0, 1, 0}, {0, 0, -1}, {0, 0, 1}};
queue<tuple<int, int, int>> qt;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> M >> N >> H;
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < M; k++)
            {
                cin >> tom[i][j][k];
                if (tom[i][j][k] == 1)
                {
                    count++;
                    qt.push({i, j, k});
                }
                else if (tom[i][j][k] == -1)
                    walls++;
            }
        }
    }

    while (!qt.empty())
    {
        tuple<int, int, int> pos = qt.front();
        qt.pop();
        int z = get<0>(pos);
        int y = get<1>(pos);
        int x = get<2>(pos);

        for (int i = 0; i < 6; i++)
        {
            int zz = z + dir[i][0];
            int yy = y + dir[i][1];
            int xx = x + dir[i][2];

            if (zz >= H || zz < 0 || yy >= N || yy < 0 || xx >= M || xx < 0)
                continue;

            if (visited[zz][yy][xx] == 0 && tom[zz][yy][xx] == 0)
            {
                qt.push({zz, yy, xx});
                visited[zz][yy][xx] = visited[z][y][x] + 1;
                answer = max(answer, visited[zz][yy][xx]);
                count++;
            }
        }
    }
    if (M * N * H - walls == count)
        cout << answer;
    else
        cout << "-1";

    return 0;
}

// 5 3 2
// 0 0 0 0 0
// 0 0 0 0 0
// 0 0 0 0 0
// 0 0 0 0 0
// 0 0 1 0 0
// 0 0 0 0 0

// 4
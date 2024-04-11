#include <iostream>
#include <queue>
using namespace std;

int M, N, answer, colored, walls;
int tomatoes[1001][1001];
int visited[1001][1001];
int dir[][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
queue<pair<int, int>> qp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> M >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> tomatoes[i][j];
            if (tomatoes[i][j] == 1)
            {
                qp.push({i, j});
                colored++;
            }
            else if (tomatoes[i][j] == -1)
                walls++;
        }
    }

    while (!qp.empty())
    {
        pair<int, int> pos = qp.front();
        int y = pos.first, x = pos.second;
        qp.pop();

        for (int i = 0; i < 4; i++)
        {
            int xx = x + dir[i][0];
            int yy = y + dir[i][1];

            if (xx >= 0 && xx < M && yy >= 0 && yy < N && visited[yy][xx] == 0 && tomatoes[yy][xx] == 0)
            {
                qp.push({yy, xx});
                visited[yy][xx] = visited[y][x] + 1;
                answer = max(answer, visited[yy][xx]);
                colored++;
            }
        }
    }

    if (M * N - walls == colored)
        cout << answer;
    else
        cout << -1;

    return 0;
}

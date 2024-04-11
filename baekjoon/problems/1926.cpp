#include <iostream>
#include <queue>
using namespace std;

int n, m, countPics, answer, graph[501][501], dir[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
bool visited[501][501];
queue<pair<int, int>> qp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> graph[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (graph[i][j] == 1 && !visited[i][j])
            {
                qp.push({i, j});
                visited[i][j] = true;
                countPics++;
                int count = 0;
                while (!qp.empty())
                {
                    pair<int, int> pos = qp.front();
                    int y = pos.first;
                    int x = pos.second;
                    qp.pop();
                    count++;
                    for (int i = 0; i < 4; i++)
                    {
                        int yy = y + dir[i][0];
                        int xx = x + dir[i][1];
                        if (yy < 0 || yy >= n || xx < 0 || xx >= m)
                            continue;
                        if (!visited[yy][xx] && graph[yy][xx] == 1)
                        {
                            visited[yy][xx] = true;
                            qp.push({yy, xx});
                        }
                    }
                }
                answer = max(count, answer);
            }
        }
    }
    cout << countPics << '\n'
         << answer;

    return 0;
}
// 6 5
// 1 1 0 1 1
// 0 1 1 0 0
// 0 0 0 0 0
// 1 0 1 1 1
// 0 0 1 1 1
// 0 0 1 1 1

// 4
// 9
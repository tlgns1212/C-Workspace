#include <iostream>
#include <queue>
using namespace std;

int N, M, answer, dir[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
string map[51];
queue<pair<int, int>> qp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> map[i];
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (map[i][j] == 'L')
            {
                qp.push({i, j});
                int visited[51][51] = {
                    0};
                visited[i][j] = 1;
                while (!qp.empty())
                {
                    pair<int, int> p = qp.front();
                    int y = p.first;
                    int x = p.second;
                    qp.pop();

                    for (int i = 0; i < 4; i++)
                    {
                        int yy = y + dir[i][1];
                        int xx = x + dir[i][0];
                        if (yy >= N || yy < 0 || xx >= M || xx < 0)
                            continue;
                        if (visited[yy][xx] == 0 && map[yy][xx] == 'L')
                        {
                            visited[yy][xx] = visited[y][x] + 1;
                            if (answer < visited[yy][xx])
                                answer = visited[yy][xx];
                            qp.push({yy, xx});
                        }
                    }
                }
            }
        }
    }

    cout << answer - 1;

    return 0;
}
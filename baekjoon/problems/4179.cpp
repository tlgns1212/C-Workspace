#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int R, C, dir[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}}, visited[1001][1001];
char graph[1001][1001];
queue<pair<int, int>> qp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> R >> C;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> graph[i][j];
            if (graph[i][j] == 'J')
            {
                qp.push({i, j});
                visited[i][j] = 1;
            }
            if (graph[i][j] == 'F')
            {
                qp.push({i, j});
            }
        }
    }
    while (!qp.empty())
    {
        pair<int, int> pos = qp.front();
        int y = pos.first;
        int x = pos.second;
        if (graph[y][x] == 'J' && (y == 0 || x == 0 || y == R - 1 || x == C - 1))
        {
            cout << visited[y][x];
            break;
        }
        qp.pop();

        for (int i = 0; i < 4; i++)
        {
            int yy = y + dir[i][0];
            int xx = x + dir[i][1];
            if (yy < 0 || yy > R || xx < 0 || xx > C)
                continue;
            if (graph[y][x] == 'F')
            {
                if (graph[yy][xx] != '#' && visited[yy][xx] == 0)
                {
                    qp.push({yy, xx});
                    visited[yy][xx] = -1;
                    graph[yy][xx] = 'F';
                }
            }
            else
            {
                if (graph[yy][xx] == '.' && visited[yy][xx] == 0)
                {
                    qp.push({yy, xx});
                    graph[yy][xx] = 'J';
                    visited[yy][xx] = visited[y][x] + 1;
                }
            }
        }
    }

    if (qp.empty())
        cout << "IMPOSSIBLE";

    return 0;
}
// 4 4
// ####
// #JF#
// #..#
// #..#

// 3
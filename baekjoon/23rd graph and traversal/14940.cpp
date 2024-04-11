#include <iostream>
#include <queue>
using namespace std;

int N, M, x, y;
int graph[1002][1002];
int answer[1002][1002];
int dir[][2] = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> graph[i][j];
            if (graph[i][j] == 2)
            {
                x = j;
                y = i;
            }
        }
    }

    queue<pair<int, int>> qp;
    qp.push(make_pair(y, x));
    while (!qp.empty())
    {
        pair<int, int> p = qp.front();
        qp.pop();
        int y = p.first;
        int x = p.second;

        if (graph[y][x] == 0)
        {
            answer[y][x] = 0;
            continue;
        }
        if (graph[y][x] < 0)
            continue;
        graph[y][x] = -1;
        for (int i = 0; i < 4; i++)
        {
            int xx = x + dir[i][0];
            int yy = y + dir[i][1];
            if (xx > M || xx < 0 || yy > N || yy < 0)
                continue;
            qp.push(make_pair(yy, xx));
            if (graph[yy][xx] == 1)
                answer[yy][xx] = answer[y][x] + 1;
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (graph[i][j] == 1 && answer[i][j] == 0)
                cout << -1 << ' ';
            else
                cout << answer[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
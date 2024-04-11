#include <iostream>
#include <queue>
using namespace std;

int R, C, N, dir[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
char graph[201][201];
queue<pair<int, int>> qp;

void SetQueue()
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (graph[i][j] == 'O')
                qp.push({i, j});
        }
    }
}

void SetZeros()
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            graph[i][j] = 'O';
        }
    }
}

void DrawGraph()
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << graph[i][j];
        }
        cout << '\n';
    }
}

void BFS()
{
    while (!qp.empty())
    {
        pair<int, int> pos = qp.front();
        bool visited[101][101] = {false};
        qp.pop();
        int y = pos.first;
        int x = pos.second;

        graph[y][x] = '.';

        for (int i = 0; i < 4; i++)
        {
            int yy = y + dir[i][0];
            int xx = x + dir[i][1];
            if (yy < 0 || yy >= R || xx < 0 || xx >= C)
                continue;

            graph[yy][xx] = '.';
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> R >> C >> N;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> graph[i][j];
            if (graph[i][j] == 'O')
                qp.push({i, j});
        }
    }

    if (N % 2 == 0)
    {
        SetZeros();
        DrawGraph();
    }
    else if (N == 1)
    {
        DrawGraph();
    }
    else
    {
        SetZeros();
        BFS();

        if (((N - 1) / 2) % 2 == 1) // 바뀐 것
        {
            DrawGraph();
        }
        if (((N - 1) / 2) % 2 == 0) // 원래 것
        {
            SetQueue();
            SetZeros();
            BFS();
            DrawGraph();
        }
    }

    return 0;
}

// 6 7 3
// .......
// ...0...
// ....0..
// .......
// 00.....
// 00.....

// 000.000
// 00...00
// 000...0
// ..00.00
// ...0000
// ...0000
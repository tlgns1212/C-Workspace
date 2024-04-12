#include <iostream>
#include <queue>
#include <vector>
using namespace std;

const int MAX = 3;

int N, M, graph[9][9], dir[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}}, answer;
vector<pair<int, int>> vp;
queue<pair<int, int>> qp;
bool visited[9][9];

void BFS()
{
    int tempGraph[9][9];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            tempGraph[i][j] = graph[i][j];
        }
    }
    for (pair<int, int> p : vp)
        qp.push(p);
    while (!qp.empty())
    {
        int y = qp.front().first;
        int x = qp.front().second;
        qp.pop();

        for (int i = 0; i < 4; i++)
        {
            int yy = y + dir[i][0];
            int xx = x + dir[i][1];
            if (yy < 0 || yy >= N || xx < 0 || xx >= M)
                continue;
            if (tempGraph[yy][xx] == 0)
            {
                tempGraph[yy][xx] = 2;
                qp.push({yy, xx});
            }
        }
    }

    int count = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (tempGraph[i][j] == 0)
            {
                count++;
            }
        }
    }
    answer = max(answer, count);
}

void DFS(int idx, int cnt)
{
    if (cnt == MAX)
    {
        BFS();
        return;
    }

    for (int i = idx; i < N * M; i++)
    {
        int y = (int)(i / M);
        int x = i % M;

        if (graph[y][x] == 0)
        {
            graph[y][x] = 1;
            DFS(idx + 1, cnt + 1);
            graph[y][x] = 0;
        }
    }
}

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
                vp.push_back({i, j});
        }
    }

    int idx = 0;
    while (1)
    {
        int y = (int)(idx / M);
        int x = idx % M;
        if (graph[y][x] == 0)
        {
            DFS(idx, 0);
            break;
        }
        idx++;
    }

    cout << answer;

    return 0;
}

// 7 7
// 2 0 0 0 1 1 0
// 0 0 1 0 1 2 0
// 0 1 1 0 1 0 0
// 0 1 0 0 0 0 0
// 0 0 0 0 0 1 1
// 0 1 0 0 0 0 0
// 0 1 0 0 0 0 0

// 27

// 4 6
// 0 0 0 0 0 0
// 1 0 0 0 0 2
// 1 1 1 0 0 2
// 0 0 0 0 0 2

// 9

// 8 8
// 2 0 0 0 0 0 0 2
// 2 0 0 0 0 0 0 2
// 2 0 0 0 0 0 0 2
// 2 0 0 0 0 0 0 2
// 2 0 0 0 0 0 0 2
// 0 0 0 0 0 0 0 0
// 0 0 0 0 0 0 0 0
// 0 0 0 0 0 0 0 0

#include <iostream>
using namespace std;

int R, C, answer, dir[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
char graph[21][21];
bool visited[21][21];
bool visitedChar[27];

void DFS(int y, int x, int count)
{
    if (count > answer)
    {
        answer = count;
    }
    for (int i = 0; i < 4; i++)
    {
        int yy = y + dir[i][0];
        int xx = x + dir[i][1];

        if (yy < 0 || yy >= R || xx < 0 || xx >= C)
            continue;
        if (!visitedChar[graph[yy][xx] - 'A'])
        {
            visitedChar[graph[yy][xx] - 'A'] = true;
            visited[yy][xx] = true;
            DFS(yy, xx, count + 1);
            visited[yy][xx] = false;
            visitedChar[graph[yy][xx] - 'A'] = false;
        }
    }
}

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
        }
    }
    visited[0][0] = true;
    visitedChar[graph[0][0] - 'A'] = true;
    DFS(0, 0, 1);

    cout << answer;
    return 0;
}

// 2 4
// CAAB
// ADCB

// 3
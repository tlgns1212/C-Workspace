#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    int graph[101][101] = {0};
    bool visited[101][101] = {false};
    int result[101][101] = {0};
    int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    string tempS;
    queue<pair<int, int>> q;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> tempS;
        for (int j = 0; j < tempS.size(); j++)
        {
            graph[i][j] = tempS[j] - '0';
        }
    }
    q.push(pair<int, int>(0, 0));
    result[0][0] = 1;
    while (!q.empty())
    {
        int y = q.front().first, x = q.front().second;
        q.pop();
        if (!visited[y][x])
        {
            visited[y][x] = true;
            for (int i = 0; i < 4; i++)
            {
                int yy = y + dir[i][0], xx = x + dir[i][1];
                if ((yy >= 0 && yy < N && xx >= 0 && xx < M) && (graph[yy][xx] == 1) && (!visited[yy][xx]))
                {
                    result[yy][xx] = result[y][x] + 1;
                    q.push(pair<int, int>(yy, xx));
                }
            }
        }
    }

    cout << result[N - 1][M - 1];

    return 0;
}
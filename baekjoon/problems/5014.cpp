#include <iostream>
#include <queue>
using namespace std;

int N, graph[101][101], maxNum, dir[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}}, answer;
bool visited[101][101], rain[101][101];
queue<pair<int, int>> qp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> graph[i][j];
            if (maxNum < graph[i][j])
                maxNum = graph[i][j];
        }
    }
    for (int i = 0; i < maxNum; i++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < N; k++)
            {
                rain[j][k] = (graph[j][k] <= i);
                visited[j][k] = false;
            }
        }
        int tempAnswer = 0;
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < N; k++)
            {
                if (!rain[j][k] && !visited[j][k])
                {
                    tempAnswer++;
                    qp.push({j, k});
                    visited[j][k] = true;
                    while (!qp.empty())
                    {
                        pair<int, int> pos = qp.front();
                        int y = pos.first;
                        int x = pos.second;
                        qp.pop();

                        for (int l = 0; l < 4; l++)
                        {
                            int yy = y + dir[l][0];
                            int xx = x + dir[l][1];
                            if (xx < 0 || xx >= N || yy < 0 || yy >= N)
                                continue;
                            if (!rain[yy][xx] && !visited[yy][xx])
                            {
                                qp.push({yy, xx});
                                visited[yy][xx] = true;
                            }
                        }
                    }
                }
            }
        }
        if (answer < tempAnswer)
            answer = tempAnswer;
    }
    cout << answer;

    return 0;
}
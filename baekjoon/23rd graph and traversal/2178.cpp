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
    int dirX[] = {1, -1, 0, 0};
    int dirY[] = {0, 0, -1, 1};
    cin >> N >> M;
    vector<vector<int>> graph(N);
    string tempS;
    for (int i = 0; i < N; i++)
    {
        vector<int> temp(M);
        cin >> tempS;
        for (int j = 0; j < tempS.length(); j++)
        {
            temp[j] = tempS[j] - 48;
        }
        graph[i] = temp;
    }

    queue<pair<int, int>> qp;
    qp.push(make_pair(0, 0));
    graph[0][0] = -1;
    while (!qp.empty())
    {
        int y = qp.front().first;
        int x = qp.front().second;
        qp.pop();

        for (int i = 0; i < 4; i++)
        {
            int tempY = y + dirY[i];
            int tempX = x + dirX[i];
            if ((tempY >= 0 && tempY < N && tempX >= 0 && tempX < M) && graph[tempY][tempX] == 1)
            {
                qp.push(make_pair(tempY, tempX));
                graph[tempY][tempX] = graph[y][x] - 1;
            }
        }

        // for (int i = 0; i < N; i++)
        // {
        //     for (int j = 0; j < M; j++)
        //     {
        //         cout << graph[i][j];
        //     }
        //     cout << '\n';
        // }
    }
    cout << -graph[N - 1][M - 1];

    return 0;
}
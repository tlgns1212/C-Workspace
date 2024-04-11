#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int M, N, K, graph[101][101], dir[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
bool visited[101][101];
vector<int> answers;
queue<pair<int, int>> qp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> M >> N >> K;
    for (int i = 0; i < K; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int y = y1; y < y2; y++)
        {
            for (int x = x1; x < x2; x++)
            {
                graph[y][x] = 1;
            }
        }
    }
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int answer = 0;
            if (graph[i][j] == 0 && visited[i][j] == false)
            {
                qp.push({i, j});
                visited[i][j] = true;
            }
            while (!qp.empty())
            {
                pair<int, int> pos = qp.front();
                int y = pos.first;
                int x = pos.second;
                qp.pop();
                answer++;

                for (int i = 0; i < 4; i++)
                {
                    int yy = y + dir[i][0];
                    int xx = x + dir[i][1];
                    if (yy < 0 || yy >= M || xx < 0 || xx >= N)
                        continue;
                    if (graph[yy][xx] == 0 && !visited[yy][xx])
                    {
                        qp.push({yy, xx});
                        visited[yy][xx] = true;
                    }
                }
            }
            if (answer > 0)
                answers.push_back(answer);
        }
    }
    sort(answers.begin(), answers.end());
    cout << answers.size() << '\n';
    for (int answer : answers)
    {
        cout << answer << ' ';
    }

    return 0;
}

// 5 7 3
// 0 2 4 4
// 1 1 2 5
// 4 0 6 2

// 3
// 1 7 13
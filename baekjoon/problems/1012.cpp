#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, M, N, K, x, y;
    int dir[2][4] = {{0, 0, 1, -1}, {1, -1, 0, 0}};
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int graph[51][51] = {
            0,
        };
        int answer = 0;
        cin >> M >> N >> K;
        for (int j = 0; j < K; j++)
        {
            cin >> x >> y;
            graph[x][y] = 1;
        }
        for (int k = 0; k < M; k++)
        {
            for (int l = 0; l < N; l++)
            {
                queue<pair<int, int>> qp;
                bool isFirst = true;
                qp.push(make_pair(k, l));

                while (!qp.empty())
                {
                    int x = qp.front().first;
                    int y = qp.front().second;
                    qp.pop();
                    if (graph[x][y] == 1)
                    {
                        graph[x][y] = 2;
                        isFirst = false;
                        for (int i = 0; i < 4; i++)
                        {
                            int xx = x + dir[0][i];
                            int yy = y + dir[1][i];
                            if (xx >= 0 && xx < M && yy >= 0 && yy < N)
                            {
                                qp.push(make_pair(xx, yy));
                            }
                        }
                    }
                }
                if (!isFirst)
                    answer++;
            }
        }
        cout << answer << '\n';
    }

    return 0;
}
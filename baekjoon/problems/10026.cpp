#include <iostream>
#include <queue>
using namespace std;

int N, answer;
int dir[][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
string rgb[101];
bool visited[101][101];
queue<pair<int, int>> qp;

void reset()
{
    for (int i = 0; i < 101; i++)
        for (int j = 0; j < 101; j++)
            visited[i][j] = false;
    while (!qp.empty())
        qp.pop();
    answer = 0;
}

void bfs(int y, int x, bool isRGB = true)
{
    qp.push({y, x});
    while (!qp.empty())
    {
        pair<int, int> pos = qp.front();
        qp.pop();
        int y = pos.first;
        int x = pos.second;

        if (visited[y][x])
            continue;
        visited[y][x] = true;
        char color = rgb[y][x];

        for (int i = 0; i < 4; i++)
        {
            int yy = y + dir[i][0];
            int xx = x + dir[i][1];

            if (yy <= 100 && yy >= 0 && xx <= 100 && xx >= 0)
            {
                if (isRGB && color == rgb[yy][xx])
                {
                    qp.push({yy, xx});
                }
                else if (!isRGB)
                {
                    if ((color == 'R' || color == 'G') && (rgb[yy][xx] == 'R' || rgb[yy][xx] == 'G') || (color == 'B' && rgb[yy][xx] == 'B'))
                        qp.push({yy, xx});
                }
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> rgb[i];
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (!visited[i][j])
            {
                answer++;
                bfs(i, j);
            }
        }
    }
    cout << answer << ' ';
    reset();
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (!visited[i][j])
            {
                answer++;
                bfs(i, j, false);
            }
        }
    }
    cout << answer;
    return 0;
}

// 5
// RRRBB
// GGBBB
// BBBRR
// BBRRR
// RRRRR
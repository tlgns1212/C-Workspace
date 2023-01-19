#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int tomatoes[101][101][101];
int result[101][101][101];
bool visited[101][101][101] = {false};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M, N, H, temp, cnt = 0;
    int dirX[6] = {0, 0, 0, 0, -1, 1}, dirY[6] = {0, 0, 1, -1, 0, 0}, dirZ[6] = {-1, 1, 0, 0, 0, 0};
    bool isAnswerPrinted = false;
    queue<tuple<int, int, int>> q;

    cin >> M >> N >> H;

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < M; k++)
            {
                cin >> temp;
                if (temp == 0)
                {
                    cnt++;
                }
                if (temp == 1)
                {
                    result[i][j][k] = 0;
                    q.push(make_tuple(i, j, k));
                }
                tomatoes[i][j][k] = temp;
            }
        }
    }

    while (!q.empty())
    {
        int nowZ = get<0>(q.front()), nowX = get<1>(q.front()), nowY = get<2>(q.front());
        q.pop();
        if (!visited[nowZ][nowX][nowY])
        {
            if (tomatoes[nowZ][nowX][nowY] == 0)
            {
                cnt--;
            }
            if (cnt == 0)
            {
                isAnswerPrinted = true;
                cout << result[nowZ][nowX][nowY];
                break;
            }
            visited[nowZ][nowX][nowY] = true;
            for (int i = 0; i < 6; i++)
            {
                int newZ = nowZ + dirZ[i], newX = nowX + dirX[i], newY = nowY + dirY[i];
                if (((newX >= 0 && newX < N) && (newY >= 0 && newY < M) && (newZ >= 0 && newZ < H)) && tomatoes[newZ][newX][newY] == 0)
                {
                    q.push(make_tuple(newZ, newX, newY));
                    if (result[newZ][newX][newY] == 0)
                    {
                        result[newZ][newX][newY] = result[nowZ][nowX][nowY] + 1;
                    }
                }
            }
        }
    }

    if (!isAnswerPrinted)
    {
        cout << -1;
    }

    return 0;
}
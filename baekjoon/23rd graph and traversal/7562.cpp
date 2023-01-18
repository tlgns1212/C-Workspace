#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, L, knightX, knightY, goX, goY;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int board[301][301] = {0};
        int dirX[8] = {-2, -2, -1, -1, 1, 1, 2, 2}, dirY[8] = {-1, 1, -2, 2, -2, 2, -1, 1};
        bool visited[301][301] = {false};
        int result[301][301] = {0};
        queue<pair<int, int>> q;

        cin >> L >> knightX >> knightY >> goX >> goY; // 현재 위치랑 가야할 위치
        q.push(pair<int, int>(knightX, knightY));     // pair로 x와 y축 둘다 저장
        result[0][0] = 0;                             // 시작지점은 0번 움직임
        while (!q.empty())                            // bfs
        {
            int nowX = q.front().first, nowY = q.front().second;
            if (nowX == goX && nowY == goY) // 없어도 무방, 다만 시간이 길어짐
            {
                break;
            }
            q.pop();
            if (!visited[nowX][nowY])
            {
                visited[nowX][nowY] = true;
                for (int j = 0; j < 8; j++)
                {
                    int newX = nowX + dirX[j], newY = nowY + dirY[j];
                    if (newX >= 0 && newX < L && newY >= 0 && newY < L)
                    {
                        if (result[newX][newY] == 0)
                        {
                            result[newX][newY] = result[nowX][nowY] + 1; // 다음 움직임은 현재 움직임 + 1
                            q.push(pair<int, int>(newX, newY));
                        }
                    }
                }
            }
        }
        cout << result[goX][goY] << '\n';
    }
    return 0;
}
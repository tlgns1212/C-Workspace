#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int tomatoes[1001][1001] = {0};
bool visited[1001][1001] = {false};
int result[1001][1001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M, N, cnt = 0, temp;
    int dirX[4] = {-1, 1, 0, 0};
    int dirY[4] = {0, 0, -1, 1};
    bool isAnswerPrinted = false;
    queue<pair<int, int>> q;

    cin >> M >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> temp;
            if (temp == 0)
            {
                cnt++; // 안 익은 토마토 몇개 있는지 세기
            }
            if (temp == 1)
            {
                q.push(pair<int, int>(i, j)); // 익은 토마토 위치 queue에 저장
                result[i][j] = 0;             // 각자 토마토 날짜 저장
            }
            tomatoes[i][j] = temp;
        }
    }
    while (!q.empty())
    {
        int nowX = q.front().first, nowY = q.front().second;
        q.pop();
        if (!visited[nowX][nowY] && tomatoes[nowX][nowY] >= 0) // 토마토에 처음 들리고 토마토가 있으면
        {
            visited[nowX][nowY] = true;
            if (tomatoes[nowX][nowY] == 0) // 토마토가 안 익은 토마토일때 세기
            {
                cnt--;
            }
            if (cnt == 0) // 모든 토마토가 익었으면 출력
            {
                isAnswerPrinted = true;
                cout << result[nowX][nowY];
                break;
            }
            for (int i = 0; i < 4; i++) // 상하좌우로
            {
                int newX = nowX + dirX[i], newY = nowY + dirY[i];
                if ((newX >= 0 && newX < N && newY >= 0 && newY < M) && tomatoes[newX][newY] == 0) // 박스를 벗어나지 않고 다음 토마토가 안 익은 토마토면
                {
                    q.push(pair<int, int>(newX, newY));
                    if (result[newX][newY] == 0)
                    {
                        result[newX][newY] = result[nowX][nowY] + 1; // 다음 토마토는 현재 토마토에 날짜 하나 더함
                    }
                }
            }
        }
    }
    if (!isAnswerPrinted) // 모든 토마토가 익지 않았을때
    {
        cout << -1;
    }
    return 0;
}
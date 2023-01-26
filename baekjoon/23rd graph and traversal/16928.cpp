#include <iostream>
#include <map>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<int, int> m;
    queue<int> q;
    bool visited[107] = {false};
    bool board[107] = {false};
    int result[107] = {0};
    int N, M, tempX, tempY;

    cin >> N >> M;
    for (int i = 0; i < N + M; i++)
    {
        cin >> tempX >> tempY;
        m[tempX] = tempY; // 사다리 or 뱀의 후경로 저장
        board[tempX] = true;
    }

    q.push(1);
    while (!q.empty())
    {
        int nowX = q.front();
        q.pop();
        // if (nowX == 100)
        // {
        //     break;
        // }
        if (!visited[nowX])
        {
            visited[nowX] = true;
            if (board[nowX]) // 해당 위치에 사다리 or 뱀이 있을 경우
            {
                q.push(m[nowX]);
                result[m[nowX]] = result[nowX];
            }
            else
            {
                for (int i = 1; i <= 6; i++)
                {
                    if ((result[nowX + i] == 0 || result[nowX + i] > result[nowX] + 1) && nowX <= 100)
                    {
                        q.push(nowX + i);
                        result[nowX + i] = result[nowX] + 1;
                    }
                }
            }
        }
    }

    cout << result[100];

    return 0;
}
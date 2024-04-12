#include <iostream>
#include <queue>
#include <map>
using namespace std;

int N, M, visited[101];
map<int, int> ladder, snake;
queue<int> q;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    int temp1, temp2;
    for (int i = 0; i < N; i++)
    {
        cin >> temp1 >> temp2;
        ladder[temp1] = temp2;
    }
    for (int i = 0; i < M; i++)
    {
        cin >> temp1 >> temp2;
        snake[temp1] = temp2;
    }

    q.push(1);
    while (!q.empty())
    {
        int x = q.front();
        q.pop();

        if (x == 100)
        {
            break;
        }
        for (int i = 1; i <= 6; i++)
        {
            int xx = x + i;
            if (xx <= 100)
            {
                if (ladder.find(xx) != ladder.end())
                {
                    if (visited[ladder[xx]] == 0)
                    {
                        visited[ladder[xx]] = visited[x] + 1;
                        q.push(ladder[xx]);
                    }
                }
                else if (snake.find(xx) != snake.end())
                {
                    if (visited[snake[xx]] == 0)
                    {
                        visited[snake[xx]] = visited[x] + 1;
                        q.push(snake[xx]);
                    }
                }
                else
                {
                    if (visited[xx] == 0)
                    {
                        visited[xx] = visited[x] + 1;
                        q.push(xx);
                    }
                }
            }
        }
    }
    cout << visited[100];

    return 0;
}

// 3 7
// 32 62
// 42 68
// 12 98
// 95 13
// 97 25
// 93 37
// 79 27
// 75 19
// 49 47
// 67 17

// 3
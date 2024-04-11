#include <iostream>
using namespace std;

const int dx[] = {-1, 0, 1};
int N, M, answer = 99999999;
int space[7][7];

void input()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> space[i][j];
        }
    }
}

int dp(int y, int x, int last)
{
    if (y == N)
        return 0;

    int smallest = 99999999;
    for (int dir : dx)
    {
        if (x + dir < 0 || x + dir >= M)
            continue;
        if (dir == last)
            continue;

        smallest = min(smallest, dp(y + 1, x + dir, dir) + space[y][x]);
    }
    return smallest;
}

void solution()
{
    for (int i = 0; i < M; i++)
    {
        answer = min(answer, dp(0, i, -2));
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    solution();

    cout << answer;

    return 0;
}

// 6 4
// 5 8 5 1
// 3 5 8 4
// 9 77 65 5
// 2 1 5 2
// 5 98 1 5
// 4 95 67 58

// 29
#include <iostream>
#include <queue>
#include <tuple>
#include <vector>
using namespace std;

int N, answer, house[18][18], dir[3][2] = {{0, 1}, {1, 1}, {1, 0}};
queue<tuple<int, int, int>> qt;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> house[i][j];
        }
    }

    qt.push({0, 1, 0});
    while (!qt.empty())
    {
        tuple<int, int, int> t = qt.front();
        qt.pop();
        int y = get<0>(t);
        int x = get<1>(t);
        int dir = get<2>(t);

        if (y == N - 1 && x == N - 1)
        {
            answer++;
            continue;
        }

        for (int i = -1; i <= 1; i++)
        {
            int ddir = dir + i;
            if (ddir < 0 || ddir > 2)
                continue;
            if (ddir == 1)
            {
                if (x + 1 >= N || y + 1 >= N)
                    continue;
                if (house[y + 1][x] == 0 && house[y + 1][x + 1] == 0 && house[y][x + 1] == 0)
                {
                    qt.push({y + 1, x + 1, 1});
                }
            }
            else if (ddir == 0)
            {
                if (x + 1 >= N)
                    continue;
                if (house[y][x + 1] == 0)
                    qt.push({y, x + 1, 0});
            }
            else if (ddir == 2)
            {
                if (y + 1 >= N)
                    continue;
                if (house[y + 1][x] == 0)
                    qt.push({y + 1, x, 2});
            }
        }
    }
    cout << answer;

    return 0;
}
#include <iostream>
using namespace std;

int H, W, X, Y, graph[602][602];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> H >> W >> X >> Y;

    for (int i = 0; i < H + X; i++)
    {
        for (int j = 0; j < W + Y; j++)
        {
            cin >> graph[i][j];
        }
    }

    for (int i = X; i < H; i++)
    {
        for (int j = Y; j < W; j++)
        {
            graph[i][j] -= graph[i - X][j - Y];
        }
    }

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cout << graph[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}

// 2 4 1 1
// 1 2 3 4 0
// 5 7 9 11 4
// 0 5 6 7 8

// 1 2 3 4
// 5 6 7 8
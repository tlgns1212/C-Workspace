#include <iostream>
using namespace std;

int staircase(int height, int room)
{
    if (height == 0)
    {
        return room;
    }
    else if (room == 1)
    {
        return 1;
    }
    else
    {
        return staircase(height - 1, room) + staircase(height, room - 1);
    }
}

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int T;
//     cin >> T;
//     for (int i = 0; i < T; i++)
//     {
//         int k, n;
//         cin >> k >> n;
//         cout << staircase(k, n) << '\n';
//     }
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a[15][15] = {0}, i, j, T, k, n;
    for (i = 0; i < 15; i++)
    {
        a[0][i] = i;
    }
    for (i = 1; i < 15; i++)
    {
        for (j = 1; j < 15; j++)
        {
            a[i][j] = a[i - 1][j] + a[i][j - 1];
        }
    }

    cin >> T;
    for (i = 0; i < T; i++)
    {
        cin >> k >> n;
        cout << a[k][n] << '\n';
    }
}
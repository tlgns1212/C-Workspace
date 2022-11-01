#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int board[9][9];
    int max = -1, x, y;

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> board[i][j];
            if (max < board[i][j])
            {
                max = board[i][j];
                x = i + 1;
                y = j + 1;
            }
        }
    }
    cout << max << '\n'
         << x << ' ' << y;

    return 0;
}
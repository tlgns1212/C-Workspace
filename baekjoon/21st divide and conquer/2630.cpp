#include <iostream>
using namespace std;

int count[2] = {0, 0};
int board[129][129];

void divideHalf(int nowx, int nowy, int n)
{
    int first = board[nowx][nowy];
    bool isSame = true;
    for (int i = 0; i < n; i++)
    {
        if (isSame)
        {
            for (int j = 0; j < n; j++)
            {
                if (board[nowx + i][nowy + j] != first)
                {
                    isSame = false;
                    divideHalf(nowx, nowy, n / 2);
                    divideHalf(nowx + n / 2, nowy, n / 2);
                    divideHalf(nowx, nowy + n / 2, n / 2);
                    divideHalf(nowx + n / 2, nowy + n / 2, n / 2);
                    break;
                }
            }
        }
    }
    if (isSame)
    {
        count[(first == 1 ? 1 : 0)]++;
    }
}

int main()
{
    int N;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> board[i][j];
        }
    }

    divideHalf(0, 0, N);

    cout << count[0] << '\n'
         << count[1];

    return 0;
}

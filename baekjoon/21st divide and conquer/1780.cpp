#include <iostream>
using namespace std;

int count[3] = {0, 0, 0};
int board[2188][2188];

void divideNine(int nowx, int nowy, int n)
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
                    int temp = n / 3;
                    divideNine(nowx, nowy, temp);
                    divideNine(nowx, nowy + temp, temp);
                    divideNine(nowx, nowy + temp + temp, temp);
                    divideNine(nowx + temp, nowy, temp);
                    divideNine(nowx + temp, nowy + temp, temp);
                    divideNine(nowx + temp, nowy + temp + temp, temp);
                    divideNine(nowx + temp + temp, nowy, temp);
                    divideNine(nowx + temp + temp, nowy + temp, temp);
                    divideNine(nowx + temp + temp, nowy + temp + temp, temp);
                    break;
                }
            }
        }
    }
    if (isSame)
    {
        count[(first == 1 ? 2 : (first == 0 ? 1 : 0))]++;
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

    divideNine(0, 0, N);

    cout << count[0] << '\n'
         << count[1] << '\n'
         << count[2];

    return 0;
}

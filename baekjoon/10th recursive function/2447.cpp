#include <iostream>
#include <cmath>
#include <vector>
#include <cstring>
using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     vector<vector<char>> A2;
//     vector<char> A;
//     int N, squared, k = 1, times = 1, jump = 1, Nsmall, Nbig, Ntemp = 9;
//     cin >> N;
//     while (1)
//     {
//         squared = pow(3, k);
//         if (squared == N)
//         {
//             break;
//         }
//         k++;
//     }
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < N; j++)
//         {
//             if ((i % 3 == 1) && (j % 3 == 1))
//             {
//                 A.push_back(' ');
//             }
//             else
//             {
//                 A.push_back('*');
//             }
//         }
//         A2.push_back(A);
//         A.clear();
//     }
//     while (times <= (k - 1))
//     {
//         Nsmall = (Ntemp / 2) - jump;
//         Nbig = (Ntemp / 2) + jump;
//         for (int i = 0; i < N; i++)
//         {
//             for (int j = 0; j < N; j++)
//             {
//                 if ((((i % Ntemp) >= Nsmall) && ((i % Ntemp) <= Nbig)) && (((j % Ntemp) >= Nsmall) && ((j % Ntemp) <= Nbig)))
//                 {
//                     A2[i][j] = ' ';
//                 }
//             }
//         }
//         jump += pow(3, times);
//         times++;
//         Ntemp *= 3;
//     }
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < N; j++)
//         {
//             cout << A2[i][j];
//         }
//         cout << '\n';
//     }
// }

int n;
char board[2188 * 2187];
void stamp(int x, int y, int d)
{
    int offset = d / 3;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 1 && j == 1)
                ;
            else if (d == 3)
            {
                board[x + i + (n + 1) * (y + j)] = '*';
            }
            else
            {
                stamp(x + i * offset, y + j * offset, d / 3);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    memset(board, ' ', (n * (n + 1)));
    stamp(0, 0, n);

    for (int i = 0; i < n; i++)
    {
        board[n + i * (n + 1)] = '\n';
    }
    board[(n + 1) * n - 1] = 0;
    cout << board;
}

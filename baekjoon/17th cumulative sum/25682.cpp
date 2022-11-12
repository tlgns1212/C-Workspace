#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, K, minColor = 100000001, tempB, tempW, smallerTemp;
    char temp;
    cin >> N >> M >> K;
    vector<int> v(M + 1, 0);
    vector<vector<int>> boardB(N + 1, v); // 첫 번째가 B라고 할때 틀린 개수(입력과 같은 이차원 배열)
    vector<vector<int>> boardW(N + 1, v); // 첫 번째가 W라고 할때 틀린 개수

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            cin >> temp;
            if ((i + j) % 2 == 1) // 1. 틀릴때마다 1씩 추가해주기
            {
                if (temp == 'B')
                {
                    boardB[i][j] = boardB[i - 1][j] + boardB[i][j - 1] - boardB[i - 1][j - 1] + 1;
                    boardW[i][j] = boardW[i - 1][j] + boardW[i][j - 1] - boardW[i - 1][j - 1];
                }
                else
                {
                    boardB[i][j] = boardB[i - 1][j] + boardB[i][j - 1] - boardB[i - 1][j - 1];
                    boardW[i][j] = boardW[i - 1][j] + boardW[i][j - 1] - boardW[i - 1][j - 1] + 1;
                }
            }
            else
            {
                if (temp == 'B')
                {
                    boardB[i][j] = boardB[i - 1][j] + boardB[i][j - 1] - boardB[i - 1][j - 1];
                    boardW[i][j] = boardW[i - 1][j] + boardW[i][j - 1] - boardW[i - 1][j - 1] + 1;
                }
                else
                {
                    boardB[i][j] = boardB[i - 1][j] + boardB[i][j - 1] - boardB[i - 1][j - 1] + 1;
                    boardW[i][j] = boardW[i - 1][j] + boardW[i][j - 1] - boardW[i - 1][j - 1];
                }
            }
        }
    }
    for (int i = 0; i + K <= N; i++)
    {
        for (int j = 0; j + K <= M; j++) // 2. 틀린 경우가 가장 적은 경우 구하기
        {
            tempB = boardB[i + K][j + K] - boardB[i][j + K] - boardB[i + K][j] + boardB[i][j];
            tempW = boardW[i + K][j + K] - boardW[i][j + K] - boardW[i + K][j] + boardW[i][j];
            smallerTemp = min(tempB, tempW);
            if (minColor > smallerTemp)
            {
                minColor = smallerTemp;
            }
        }
    }
    cout << minColor;

    // cout << "\n\n"; // 출력 어떻게 되는지 확인하기
    // for (auto a : boardB)
    // {
    //     for (auto aa : a)
    //     {
    //         cout << aa << ' ';
    //     }
    //     cout << '\n';
    // }
    // cout << "\n\n";
    // for (auto a : boardW)
    // {
    //     for (auto aa : a)
    //     {
    //         cout << aa << ' ';
    //     }
    //     cout << '\n';
    // }

    return 0;
}
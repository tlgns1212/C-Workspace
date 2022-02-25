#include <iostream>
#include <string>
using namespace std;

int main()
{
    string chessBoard[8];
    int answer = 0;
    int row = 0;

    for (int i = 0; i < 8; i++)
    {
        cin >> chessBoard[i];
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = (row % 2); j < 8; j = j + 2)
        {
            if (chessBoard[i][j] == 'F')
            {
                answer++;
            }
        }
        row++;
    }
    cout << answer;
}
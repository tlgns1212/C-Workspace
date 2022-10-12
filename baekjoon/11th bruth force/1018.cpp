#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    string temp;
    vector<string> board;
    char start;
    int unmatch = 0, unmatch2 = 0, min = 501;
    board.reserve(N);
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        board.push_back(temp);
    }

    for (int i = 0; i < N - 7; i++)
    {
        for (int j = 0; j < M - 7; j++)
        {
            start = board[i][j];
            for (int k = i; k < i + 8; k++)
            {
                for (int l = j; l < j + 8; l++)
                {
                    if ((((l - j) % 2) + ((k - i) % 2)) % 2 == 0)
                    {
                        if (board[k][l] != start)
                        {
                            unmatch++;
                        }
                    }
                    else
                    {
                        if (board[k][l] == start)
                        {
                            unmatch++;
                        }
                    }
                    if ((((l - j) % 2) + ((k - i) % 2)) % 2 == 0)
                    {
                        if (board[k][l] == start)
                        {
                            unmatch2++;
                        }
                    }
                    else
                    {
                        if (board[k][l] != start)
                        {
                            unmatch2++;
                        }
                    }
                }
            }
            if (min > unmatch)
                min = unmatch;
            if (min > unmatch2)
                min = unmatch2;
            unmatch = 0;
            unmatch2 = 0;
        }
    }

    cout << min;

    return 0;
}
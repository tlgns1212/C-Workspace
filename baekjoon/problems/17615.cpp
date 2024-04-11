#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, answer = 99999999;
    string s;

    cin >> N >> s;

    bool isOnePiece = true;
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (s[i] == 'B')
            isOnePiece = false;
        else if (isOnePiece == false && s[i] == 'R')
        {
            count++;
        }
    }
    answer = min(count, answer);
    isOnePiece = true;
    count = 0;
    for (int i = 0; i < N; i++)
    {
        if (s[i] == 'R')
            isOnePiece = false;
        else if (isOnePiece == false && s[i] == 'B')
        {
            count++;
        }
    }
    answer = min(count, answer);
    isOnePiece = true;
    count = 0;
    for (int i = N - 1; i >= 0; i--)
    {
        if (s[i] == 'R')
            isOnePiece = false;
        else if (isOnePiece == false && s[i] == 'B')
        {
            count++;
        }
    }
    answer = min(count, answer);
    isOnePiece = true;
    count = 0;
    for (int i = N - 1; i >= 0; i--)
    {
        if (s[i] == 'B')
            isOnePiece = false;
        else if (isOnePiece == false && s[i] == 'R')
        {
            count++;
        }
    }
    answer = min(count, answer);

    cout << answer;
    return 0;
}

#include <iostream>
using namespace std;

int board[15] = {
    0,
};
int total = 0;

bool check(int cnt)
{
    for (int i = 0; i < cnt; i++)
    {
        if (board[i] == board[cnt] || abs(board[cnt] - board[i]) == cnt - i)
        {
            return false;
        }
    }
    return true;
}

void queen(int cnt, int N)
{
    if (cnt == N)
    {
        total++;
        return;
    }
    for (int i = 0; i < N; i++)
    {
        board[cnt] = i;
        if (check(cnt))
        {
            queen(cnt + 1, N);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, answer;
    cin >> N;
    queen(0, N);
    cout << total;
}
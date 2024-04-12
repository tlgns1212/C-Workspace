#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 21

int N, S[MAX][MAX], minNum = 99999999;
bool players[MAX];

void dfs(int cnt)
{
    int half = N / 2;
    if (cnt == half)
    {
        int start = 0, link = 0;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (players[i] && players[j])
                    start += S[i][j];
                if (!players[i] && !players[j])
                    link += S[i][j];
            }
        }
        int dif = abs(start - link);
        minNum = min(minNum, dif);
    }
    else
    {
        for (int i = cnt; i < N; i++)
        {
            players[i] = true;
            dfs(cnt + 1);
            players[i] = false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> S[i][j];
        }
    }
    dfs(0);
    cout << minNum;

    return 0;
}
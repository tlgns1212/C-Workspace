#include <iostream>
using namespace std;

int M, N, answer;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
int board[501][501];
int dp[501][501];

int move(int m, int n)
{
    if (M == m + 1 && N == n + 1)
    {
        return 1; // 도착했으니 1을 더해주기
    }
    if (dp[m][n] != -1)
    {
        return dp[m][n]; // 이미 도착했던 곳이면 그대로 반환
    }
    dp[m][n] = 0;
    for (int i = 0; i < 4; i++)
    {
        int newM = m + dx[i];
        int newN = n + dy[i];
        if (newM >= 0 && newM < M && newN >= 0 && newN < N)
        {
            if (board[m][n] > board[newM][newN])
            {
                dp[m][n] = dp[m][n] + move(newM, newN);
            } // [M][N]부터 역으로 숫자를 세기면서 옴
        }
    }
    return dp[m][n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> M >> N;

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> board[i][j];
            dp[i][j] = -1; // visited 대신에 -1, 0으로 해놓으면 해당 위치에 접할 수 없는 경우랑 겹침
        }
    }
    answer = move(0, 0);
    cout << answer;

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

// cryptosalamander 티스토리꺼 참고해서 품

int board[9][9];
vector<pair<int, int>> points; // 여기에 0인 경우를 모두 저장해놔서 이것만 확인함, 내가 만들었던거는 9 * 9 모두 확인하면서 지나가서 시간초과
int cnt = 0;                   // 0의 개수 파악
bool found = false;

bool check(pair<int, int> p)
{
    int s_x = p.first / 3;
    int s_y = p.second / 3;
    for (int i = 0; i < 9; i++)
    {
        if (board[p.first][i] == board[p.first][p.second] && i != p.second)
        {
            return false;
        }
        if (board[i][p.second] == board[p.first][p.second] && i != p.first)
        {
            return false;
        }
    }
    for (int i = 3 * s_x; i < 3 * s_x + 3; i++)
    {
        for (int j = 3 * s_y; j < 3 * s_y + 3; j++)
        {
            if (board[i][j] == board[p.first][p.second]) // 이거 3으로 나눴다가 다시 3으로 곱하는거 중요!!!!!
            {
                if (i != p.first && j != p.second)
                {
                    return false;
                }
            }
        }
    }
    return true;
}

void sudoku(int N)
{
    if (N == cnt)
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                cout << board[i][j] << ' ';
            }
            cout << '\n';
        }
        found = true;
        return;
    }
    for (int i = 1; i <= 9; i++)
    {
        board[points[N].first][points[N].second] = i;
        if (check(points[N]))
        {
            sudoku(N + 1);
        }
        if (found)
        {
            return;
        }
    }
    board[points[N].first][points[N].second] = 0;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    pair<int, int> point;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> board[i][j];
            if (board[i][j] == 0)
            {
                cnt++;
                point.first = i;
                point.second = j;
                points.push_back(point);
            }
        }
    }
    sudoku(0);

    return 0;
}
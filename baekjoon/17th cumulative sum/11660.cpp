#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, x1, y1, x2, y2, temp;
    cin >> N >> M;
    vector<int> vX(1025, 0);
    vector<vector<int>> vBoard(1025, vX); // 이차원 배열에 저장해야 함

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cin >> temp;
            vBoard[i][j] = temp + vBoard[i][j - 1]; // 1. 가로로 증가함에 따라 더해준다( 1 2 3 4 ) 이렇게 있으면 ( 1 3 6 10) 이렇게 저장
        }
    }
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            vBoard[i][j] += vBoard[i - 1][j]; // 2. 세로로 증감하에 따라 더함(가로로는 이미 더했으니 그 위에 값과 현재 값만 저장하면 됨)
        }
    }
    for (int i = 1; i <= M; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        cout << vBoard[x2][y2] - vBoard[x2][y1 - 1] - vBoard[x1 - 1][y2] + vBoard[x1 - 1][y1 - 1] << '\n'; // 3. 현재 - 좌측 값 - 위에 값 + 좌상값 = 정답
    }

    return 0;
}
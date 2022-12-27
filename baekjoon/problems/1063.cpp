#include <iostream>
#include <string>
using namespace std;

int N, kingX, kingY, rockX, rockY;
int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

bool check(int dir)
{
    int nKingX = kingX + dx[dir], nKingY = kingY + dy[dir]; // 왕의 위치 변경
    int nRockX = rockX, nRockY = rockY;

    if (nKingX < 1 || nKingX > 8 || nKingY < 1 || nKingY > 8) // 왕의 위치가 보드 밖으로 안나가는지 확인
    {
        return false;
    }
    if (nRockX == nKingX && nRockY == nKingY) // 돌의 위치가 왕의 이동 후 위치와 같으면
    {
        nRockX += dx[dir], nRockY += dy[dir];
        if (nRockX < 1 || nRockX > 8 || nRockY < 1 || nRockY > 8)
        {
            return false;
        }
    }
    kingX = nKingX, kingY = nKingY; // 최종적으로 왕이랑 돌의 위치 적용
    rockX = nRockX, rockY = nRockY;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string kLocation, rLocation, answer = "";

    cin >> kLocation >> rLocation >> N;

    kingX = kLocation[0] - 'A' + 1, kingY = kLocation[1] - '1' + 1; // 왕이랑 돌의 위치 숫자로 변경
    rockX = rLocation[0] - 'A' + 1, rockY = rLocation[1] - '1' + 1;

    for (int i = 0; i < N; i++)
    {
        string tempS;
        cin >> tempS;
        if (tempS == "L") // 8방향에 맞는 check를 진행
        {
            if (!check(0))
            {
                continue;
            }
        }
        else if (tempS == "LT")
        {
            if (!check(1))
            {
                continue;
            }
        }
        else if (tempS == "T")
        {
            if (!check(2))
            {
                continue;
            }
        }
        else if (tempS == "RT")
        {
            if (!check(3))
            {
                continue;
            }
        }
        else if (tempS == "R")
        {
            if (!check(4))
            {
                continue;
            }
        }
        else if (tempS == "RB")
        {
            if (!check(5))
            {
                continue;
            }
        }
        else if (tempS == "B")
        {
            if (!check(6))
            {
                continue;
            }
        }
        else if (tempS == "LB")
        {
            if (!check(7))
            {
                continue;
            }
        }
    }

    cout << (char)('A' - 1 + kingX) << kingY << '\n'; // 알파벳으로 변경 후 출력
    cout << (char)('A' - 1 + rockX) << rockY << '\n';

    return 0;
}
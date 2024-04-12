#include <iostream>
using namespace std;

int N, M, r, c, d, room[51][51], answer, total;
int dir[][2] = {{0, -1}, {-1, 0}, {0, 1}, {1, 0}};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    cin >> r >> c >> d;
    if (d == 1)
        d = 3;
    else if (d == 3)
        d = 1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> room[i][j];
            if (room[i][j] == 0)
                total++;
        }
    }
    while (1)
    {
        if (room[r][c] == 0)
        {
            room[r][c] = 2;
            answer++;
        }

        bool isMessy = false;
        for (int i = 1; i < 5; i++)
        {
            int dd = (d + i) % 4;
            int yy = r + dir[dd][1];
            int xx = c + dir[dd][0];
            if (room[yy][xx] == 0)
            {
                isMessy = true;
                r = yy;
                c = xx;
                d = dd;
                break;
            }
        }
        if (!isMessy)
        {
            int yy = r + dir[(d + 2) % 4][1];
            int xx = c + dir[(d + 2) % 4][0];
            if (answer == total || room[yy][xx] == 1)
            {
                break;
            }
            else
            {
                r = yy;
                c = xx;
            }
        }
    }

    cout << answer;

    return 0;
}

// 0 상, 1 좌, 2 하, 3 우

// 11 10
// 7 4 0
// 1 1 1 1 1 1 1 1 1 1
// 1 0 0 0 0 0 0 0 0 1
// 1 0 0 0 1 1 1 1 0 1
// 1 0 0 1 1 0 0 0 0 1
// 1 0 1 1 0 0 0 0 0 1
// 1 0 0 0 0 0 0 0 0 1
// 1 0 0 0 0 0 0 1 0 1
// 1 0 0 0 0 0 1 1 0 1
// 1 0 0 0 0 0 1 1 0 1
// 1 0 0 0 0 0 0 0 0 1
// 1 1 1 1 1 1 1 1 1 1

// 57
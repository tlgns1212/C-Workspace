#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int W, H, X, Y, P, tempx, tempy, answer = 0;

    cin >> W >> H >> X >> Y >> P;

    for (int i = 0; i < P; i++)
    {
        cin >> tempx >> tempy;
        if (tempy >= Y && tempy <= Y + H)
        {
            if (tempx >= X && tempx <= X + W)
            {
                answer++;
            }
            else if (pow(X - tempx, 2) + pow((Y + H / 2) - tempy, 2) <= pow(H / 2, 2))
            {
                answer++;
            }
            else if (pow(X + W - tempx, 2) + pow((Y + H / 2) - tempy, 2) <= pow(H / 2, 2))
            {
                answer++;
            }
        }
    }
    cout << answer;
    return 0;
}
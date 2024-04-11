#include <iostream>
using namespace std;

int P[3][2];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> P[i][j];
        }
    }
    int a = (P[1][0] - P[0][0]) * (P[2][1] - P[1][1]) - (P[2][0] - P[1][0]) * (P[1][1] - P[0][1]);
    if (a < 0)
        cout << -1;
    else if (a > 0)
        cout << 1;
    else
        cout << 0;

    return 0;
}

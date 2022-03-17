#include <iostream>
using namespace std;

int main()
{
    int D, H, M, answer = 0, standard;

    cin >> D >> H >> M;
    standard = 11 + 11 * 60 + 11 * 60 * 24;
    answer = M + H * 60 + D * 60 * 24 - standard;
    if (answer < 0)
    {
        cout << -1;
    }
    else
    {
        cout << answer;
    }
}
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N, temp, M = 0, Y = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        Y += ceil((temp + 1) / 30.0) * 10;
        M += ceil((temp + 1) / 60.0) * 15;
    }

    if (Y == M)
    {
        cout << "Y M " << Y;
    }
    else if (Y > M)
    {
        cout << "M " << M;
    }
    else
    {
        cout << "Y " << Y;
    }

    return 0;
}
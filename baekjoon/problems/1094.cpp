#include <iostream>

using namespace std;

int main()
{
    int X = 64, N, cnt = 0;
    cin >> N;

    while (X != 0)
    {
        if (N - X >= 0)
        {
            N -= X;
            cnt++;
        }
        X /= 2;
    }
    cout << cnt;
    return 0;
}

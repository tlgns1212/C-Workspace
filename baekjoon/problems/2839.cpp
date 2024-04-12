#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, f, t = 0;
    cin >> N;

    f = N / 5;
    while (f != -1)
    {
        int tempN = N - f * 5;
        if (tempN % 3 == 0)
        {
            t = tempN / 3;
            break;
        }
        f--;
    }

    cout << (f == -1 ? -1 : f + t);
}
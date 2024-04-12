#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, M, N, x, y;

    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> M >> N >> x >> y;
        int year = 1;
        int limit = lcm(M, N);
        bool isAnswer = false;
        for (int j = x; j <= limit; j += M)
        {
            int temp = (j % N == 0) ? N : j % N;
            if (temp == y)
            {
                cout << j << '\n';
                isAnswer = true;
                break;
            }
        }
        if (!isAnswer)
            cout << -1 << '\n';
    }

    return 0;
}
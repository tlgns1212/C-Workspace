#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int x, int y)
{
    return (x % y == 0) ? y : gcd(y, x % y);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, A, B;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> A >> B;
        if (A >= B)
            cout << A * B / gcd(A, B) << '\n';
        else
            cout << A * B / gcd(B, A) << '\n';
    }
    return 0;
}
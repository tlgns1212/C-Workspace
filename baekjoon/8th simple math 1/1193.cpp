#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int X, i = 0, A, B;
    cin >> X;

    while (1)
    {
        X -= i;
        if (X <= 0)
            break;
        i++;
    }
    A = 1;
    B = i;
    while (X != -(i - 1))
    {
        A++;
        B--;
        X--;
    }
    if (i % 2 == 0)
    {
        cout << A << '/' << B;
    }
    else
    {
        cout << B << '/' << A;
    }
}

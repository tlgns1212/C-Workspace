#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long A, B;

    cin >> A >> B;
    if (A > B)
    {
        long long temp = A;
        A = B;
        B = temp;
    }
    cout << (A + B) * (B - A + 1) / 2 << '\n';
}
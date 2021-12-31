#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B, A1 = 0, B1 = 0;
    cin >> A >> B;
    while(A)
    {
        A1 *= 10;
        B1 *= 10;
        A1 += A % 10;
        B1 += B % 10;
        A /= 10;
        B /= 10;
    }
    cout << ((A1 > B1) ? A1 : B1);
}
#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    B += C;
    if (B > 59)
    {
        int temp;
        temp = B / 60;
        A += temp;
        B = B % 60;
    }
    if (A > 23)
    {
        A -= 24;
    }
    cout << A << ' ' << B;
}
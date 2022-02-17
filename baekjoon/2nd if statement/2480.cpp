#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int A, B, C, big = 0, same = 0;
    cin >> A >> B >> C;
    big = max(A, B);
    big = max(big, C);
    if (A == B)
    {
        same++;
    }
    if (B == C)
    {
        same++;
    }
    if (A == C)
    {
        same++;
    }
    if (same == 3)
    {
        cout << 10000 + (big * 1000);
    }
    else if (same == 1)
    {
        cout << ((A == B) ? (1000 + A * 100) : ((B == C) ? (1000 + B * 100) : ((A == C) ? (1000 + 100 * C) : 1)));
    }
    else
    {
        cout << big * 100;
    }
}
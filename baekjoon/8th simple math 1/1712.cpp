#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B, C;
    cin >> A >> B >> C;
    // 1000/(170-70) < N
    cout << ((C - B > 0) ? ((A / (C - B)) + 1) : (-1));
}
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int A[5], aver = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> A[i];
        aver += A[i];
    }
    cout << aver / 5 << '\n';
    sort(A, A + 5);

    cout << A[2];
    return 0;
}
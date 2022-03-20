#include <iostream>
using namespace std;

int main()
{
    int A[5] = {
        0,
    },
        B[4], answer = 0, ansindex = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> B[j];
            A[i] += B[j];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (answer < A[i])
        {
            answer = A[i];
            ansindex = i;
        }
    }
    cout << ansindex + 1 << ' ' << answer;
}
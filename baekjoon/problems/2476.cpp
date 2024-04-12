#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, A, B, C, best = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> A >> B >> C;
        int temp;

        if (A == B && B == C)
        {
            temp = 10000 + 1000 * A;
        }
        else if (A == B || A == C)
        {
            temp = 1000 + A * 100;
        }
        else if (B == C)
        {
            temp = 1000 + B * 100;
        }
        else
        {
            temp = 100 * max(max(A, B), C);
        }
        best = max(best, temp);
    }
    cout << best;

    return 0;
}
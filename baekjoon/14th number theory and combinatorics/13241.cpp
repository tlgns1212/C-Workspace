#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B;
    long long answer, maxN, minN;

    cin >> A >> B;
    maxN = max(A, B);
    minN = min(A, B);

    int i = 1;
    while (true)
    {
        if ((maxN * i) % minN == 0)
        {
            answer = maxN * i;
            break;
        }
        i++;
    }
    cout << answer;
    return 0;
}
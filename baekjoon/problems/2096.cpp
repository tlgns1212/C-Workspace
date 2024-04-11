#include <iostream>
using namespace std;

int N,
    input[3], minDP[3], maxDP[3], temp0, temp2;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> input[0] >> input[1] >> input[2];
        temp0 = maxDP[0];
        temp2 = maxDP[2];

        maxDP[0] = max(maxDP[0], maxDP[1]) + input[0];
        maxDP[2] = max(maxDP[2], maxDP[1]) + input[2];
        maxDP[1] = max(max(maxDP[1], temp0), temp2) + input[1];

        temp0 = minDP[0];
        temp2 = minDP[2];

        minDP[0] = min(minDP[0], minDP[1]) + input[0];
        minDP[2] = min(minDP[2], minDP[1]) + input[2];
        minDP[1] = min(min(minDP[1], temp0), temp2) + input[1];
    }

    cout << max(max(maxDP[0], maxDP[1]), maxDP[2]) << ' ' << min(min(minDP[0], minDP[1]), minDP[2]);

    return 0;
}
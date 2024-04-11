#include <iostream>
using namespace std;

const int MOD = 1000000000;
int N, dp[1000001], answer;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= abs(N); i++)
    {
        dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;
    }

    if (N < 0 && abs(N) % 2 == 0)
        answer = -dp[abs(N)];
    else
        answer = dp[abs(N)];

    cout << (answer == 0 ? 0 : (answer > 0 ? 1 : -1)) << '\n'
         << abs(answer);

    return 0;
}
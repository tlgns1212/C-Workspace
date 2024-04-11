#include <iostream>
using namespace std;

int N, A[1001], dp[1001], answer = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (A[i] > A[j])
            {
                dp[i] = max(dp[j] + A[i], dp[i]);
                if (answer < dp[i])
                    answer = dp[i];
            }
        }
        if (dp[i] == 0)
        {
            dp[i] = A[i];
            if (answer < dp[i])
                answer = dp[i];
        }
    }

    cout << answer;
    return 0;
}
// 10
// 1 100 2 50 60 3 5 6 7 8

// 113
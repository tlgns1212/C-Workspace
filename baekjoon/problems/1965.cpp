#include <iostream>
using namespace std;

int n, box[1001], dp[1001], answer;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> box[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (box[i] > box[j])
            {
                dp[i] = max(dp[i], dp[j] + 1);
                answer = max(dp[i], answer);
            }
        }
    }

    cout << answer + 1;

    return 0;
}

// 8
// 1 6 2 5 7 3 5 6

// 5

// 10
// 1 2 3 4 5 6 7 8 9 10

// 10
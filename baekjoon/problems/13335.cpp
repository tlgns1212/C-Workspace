#include <iostream>
using namespace std;

int n, w, L, trucks[1001], time, dp[1000 * 100 + 1], answer;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> w >> L;
    for (int i = 0; i < n; i++)
    {
        cin >> trucks[i];
    }
    int idx = 0;
    while (1)
    {
        int weight = trucks[idx];
        time++;
        if (dp[time] + weight <= L)
        {
            idx++;
            if (idx > n)
            {
                answer = time + w;
                break;
            }
            for (int i = 0; i < w; i++)
            {
                dp[time + i] += weight;
            }
        }
        else
        {
            continue;
        }
    }

    cout << answer - 1;

    return 0;
}

// 4 2 10
// 7 4 5 6

// 8
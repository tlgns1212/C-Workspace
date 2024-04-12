#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, answer;
vector<pair<int, int>> lines;
int dp[101];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int start, finish;
        cin >> start >> finish;
        lines.push_back({start, finish});
    }
    sort(lines.begin(), lines.end());
    for (int i = 0; i < N; i++)
    {
        dp[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (lines[i].second >= lines[j].second)
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        answer = max(answer, dp[i]);
    }

    cout << N - answer;

    return 0;
}
// 8
// 1 8
// 3 9
// 2 2
// 4 1
// 6 4
// 10 10
// 9 7
// 7 6

// 3
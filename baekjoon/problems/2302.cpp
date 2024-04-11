#include <iostream>
#include <vector>
using namespace std;

const int MAXNUM = 41;
int N, M, dp[MAXNUM];
vector<int> vip;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    for (int i = 0; i < M; i++)
    {
        int temp;
        cin >> temp;
        vip.push_back(temp);
    }
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i < MAXNUM; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    int left = 0;
    long long answer = 1;
    for (int right : vip)
    {
        if (left == right)
            continue;
        answer *= dp[right - left - 1];
        left = right;
    }
    if (N != left)
        answer *= dp[N - left];
    cout << answer;

    return 0;
}

// 9 2 4 7
// 12
#include <iostream>
#include <vector>
using namespace std;

int N, K, dp[101][100001];
vector<pair<int, int>> luggage;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> K;
    for (int i = 0; i < N; i++)
    {
        int W, V; // 무게와 가치
        cin >> W >> V;
        luggage.push_back({W, V});
    }

    for (int limit = 1; limit <= K; limit++)
    {
        {
            for (int row = 1; row <= N; row++)
            {
                if (luggage[row - 1].first > limit)
                    dp[row][limit] = dp[row - 1][limit];
                else
                {
                    dp[row][limit] = max(dp[row - 1][limit - luggage[row - 1].first] + luggage[row - 1].second, dp[row - 1][limit]);
                }
            }
        }
    }
    cout << dp[N][K];

    return 0;
}
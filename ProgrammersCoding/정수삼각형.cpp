#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> triangle)
{
    int answer = 0;
    int tSize = triangle.size();
    int dp[501][501];

    dp[0][0] = triangle[0][0];
    for (int i = 0; i < tSize; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0)
            {
                dp[i][j] = dp[i - 1][0] + triangle[i][j];
            }
            else if (j == i)
            {
                dp[i][j] = dp[i - 1][i - 1] + triangle[i][j];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + triangle[i][j];
            }
        }
    }
    for (int i = 0; i < tSize; i++)
    {
        if (answer < dp[tSize - 1][i])
        {
            answer = dp[tSize - 1][i];
        }
    }

    return answer;
}
#include <string>
#include <vector>
#include <queue>
// #include <iostream>

using namespace std;

vector<int> solution(vector<int> prices)
{
    vector<int> answer(prices.size(), 0);
    queue<pair<int, int>> q;
    int size, temp, idx;

    for (int i = 0; i < prices.size(); i++)
    {
        q.push(pair<int, int>(prices[i], 0));
        size = q.size();
        for (int j = 0; j < size; j++)
        {
            temp = q.front().first;
            idx = q.front().second;
            q.pop();
            // cout << i << ' ' << j << ' ' << temp << ' ' << idx << '\n';
            if (temp > prices[i])
            {
                // cout << i << ' ' << j << ' ' << temp << ' ' << idx << "hahahahaha\n";
                answer[i - idx] = idx;
            }
            else
                q.push(pair<int, int>(temp, idx + 1));
        }
    }
    while (!q.empty())
    {
        temp = q.front().first;
        idx = q.front().second;
        q.pop();
        answer[prices.size() - idx] = idx - 1;
    }

    return answer;
}
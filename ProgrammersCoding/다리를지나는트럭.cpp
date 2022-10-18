#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights)
{
    int answer = 0, w = 0, qsize = 0;
    queue<pair<int, int>> q;
    pair<int, int> temp;

    while (1)
    {
        qsize = q.size();
        for (int i = 0; i < qsize; i++)
        {
            temp = q.front();
            q.pop();
            w -= temp.first;
            if (temp.second - 1 != 0)
            {
                q.push(pair<int, int>(temp.first, temp.second - 1));
                w += temp.first;
            }
        }
        if (!truck_weights.empty())
        {
            if (bridge_length > q.size() && weight >= w + truck_weights[0])
            {
                q.push(pair<int, int>(truck_weights[0], bridge_length));
                w += truck_weights[0];
                truck_weights.erase(truck_weights.begin());
            }
        }
        answer++;
        if (truck_weights.empty() && q.empty())
            break;
    }
    return answer;
}
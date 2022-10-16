#include <string>
#include <vector>
#include <queue>
#include <map>

using namespace std;

int solution(vector<int> priorities, int location)
{
    int answer = 0, prior = 9;
    pair<int, int> temp;
    bool next = true;
    queue<pair<int, int>> qp;
    map<int, int, greater<int>> m;
    for (int i = 0; i < priorities.size(); i++)
    {
        qp.push(pair<int, int>(i, priorities[i]));
        m[priorities[i]]++;
    }
    while (!qp.empty())
    {
        if (next)
        {
            for (const auto &[key, value] : m)
            {
                if (value != 0)
                {
                    prior = key;
                    m[key]--;
                    next = false;
                    break;
                }
            }
        }
        temp = qp.front();
        if (temp.second == prior)
        {
            if (temp.first == location)
            {
                return ++answer;
            }
            next = true;
            qp.pop();
            answer++;
        }
        else
        {
            qp.pop();
            qp.push(temp);
        }
    }
    return answer;
}
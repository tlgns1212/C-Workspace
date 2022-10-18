#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    // if(a.second == b.second) return a.first > b.first;
    return a.second > b.second;
}

vector<int> solution(string s)
{
    vector<int> answer;
    map<int, int> m;
    string temp;
    for (int i = 1; i < s.size() - 1; i++)
    {
        if (s[i] != '{' && s[i] != '}' && s[i] != ',')
        {
            temp += s[i];
            if (s[i + 1] != ',' && s[i + 1] != '}')
            {
                continue;
            }
            m[stoi(temp)]++;
        }
        temp.clear();
    }

    vector<pair<int, int>> vp(m.begin(), m.end());
    sort(vp.begin(), vp.end(), cmp);
    for (auto i : vp)
    {
        answer.push_back(i.first);
    }

    return answer;
}
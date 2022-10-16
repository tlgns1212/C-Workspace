#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int cacheSize, vector<string> cities)
{
    int answer = 0, idx = 0;
    vector<string> s;
    for (auto city : cities)
    {
        transform(city.begin(), city.end(), city.begin(), ::tolower);
        if (cacheSize == 0)
        {
            answer += 5;
        }
        else if (s.size() < cacheSize && find(s.begin(), s.end(), city) == s.end())
        {
            s.push_back(city);
            answer += 5;
        }
        else
        {
            if (find(s.begin(), s.end(), city) != s.end())
            {
                answer += 1;
                s.erase(find(s.begin(), s.end(), city));
                s.push_back(city);
            }
            else
            {
                s.erase(s.begin());
                s.push_back(city);
                answer += 5;
            }
        }
    }

    return answer;
}
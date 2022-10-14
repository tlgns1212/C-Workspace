#include <string>
#include <vector>
#include <map>
#include <algorithm>
// #include <iostream>

using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b)
{
    return a.second > b.second;
}
bool comp(pair<int, pair<string, int>> a, pair<int, pair<string, int>> b)
{
    if (a.first == b.first)
    {
        return a.second.second < b.second.second;
    }
    else
    {
        return a.first > b.first;
    }
}

vector<int> solution(vector<string> genres, vector<int> plays)
{
    vector<int> answer;
    vector<pair<int, pair<string, int>>> v;
    map<string, int> checkM;
    for (int i = 0; i < genres.size(); i++)
    {
        v.push_back({plays[i], {genres[i], i}});
        checkM[genres[i]] += plays[i];
    }
    sort(v.begin(), v.end(), comp);
    vector<pair<string, int>> checkV(checkM.begin(), checkM.end());
    sort(checkV.begin(), checkV.end(), cmp);
    // for(auto a : checkV){
    //     cout << a.first << ' ' << a.second << '\n';
    // }
    for (auto a : checkV)
    {
        int count = 0;
        for (auto b : v)
        {
            if (b.second.first == a.first)
            {
                answer.push_back(b.second.second);
                count++;
            }
            if (count == 2)
            {
                break;
            }
        }
    }

    return answer;
}
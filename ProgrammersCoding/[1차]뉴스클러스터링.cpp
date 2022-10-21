#include <string>
#include <vector>
#include <algorithm>
// #include <iostream>

using namespace std;

int solution(string str1, string str2)
{
    int answer = 0, front = 0, back = 0, idx1 = 0, idx2 = 0;
    vector<string> v1, v2;
    v1.reserve(1001);
    v2.reserve(1001);
    for (int i = 1; i < str1.size(); i++)
    {
        string temp;
        if (isalpha(str1[i - 1]) && isalpha(str1[i]))
        {
            temp.push_back(tolower(str1[i - 1]));
            temp.push_back(tolower(str1[i]));
            v1.push_back(temp);
        }
    }
    for (int i = 1; i < str2.size(); i++)
    {
        string temp;
        if (isalpha(str2[i - 1]) && isalpha(str2[i]))
        {
            temp.push_back(tolower(str2[i - 1]));
            temp.push_back(tolower(str2[i]));
            v2.push_back(temp);
        }
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    // for(auto i : v1){
    //     cout << i << ' ';
    // }
    // cout << '\n';
    // for(auto i : v2){
    //     cout << i << ' ';
    // }
    while (1)
    {
        if (idx1 >= v1.size() && idx2 >= v2.size())
        {
            break;
        }
        else if (idx1 == v1.size())
        {
            back++;
            idx2++;
        }
        else if (idx2 == v2.size())
        {
            back++;
            idx1++;
        }
        else if (v1[idx1] == v2[idx2])
        {
            front++;
            back++;
            idx1++;
            idx2++;
        }
        else if (v1[idx1] > v2[idx2])
        {
            back++;
            idx2++;
        }
        else if (v1[idx1] < v2[idx2])
        {
            back++;
            idx1++;
        }
        // cout << front <<' ' << back << '\n';
    }
    if (front == 0 && back == 0) // 지금까지 front == 0만 했었어서 실패 떴었음 (5번, 13번)
        return 65536;
    // cout << front << ' ' << back;
    answer = (int)((double)front / back * 65536);
    return answer;
}
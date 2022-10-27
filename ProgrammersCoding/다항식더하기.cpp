#include <string>
#include <vector>
#include <sstream>
using namespace std;

string solution(string polynomial)
{ // x가 1일때는 1x가 아니라 xㅇ이어야 하는데, 그걸 틀렸었음
    string answer = "";
    stringstream ss(polynomial);
    int x = 0, dig = 0;
    vector<string> s = {};
    string temp;
    while (ss >> temp)
        s.push_back(temp);
    for (auto a : s)
    {
        if (a.find('x') != string::npos)
        {
            a.erase(a.begin() + a.find('x'));
            if (a.empty())
                x += 1;
            else
                x += stoi(a);
        }
        else if (isdigit(a[a.size() - 1]) != 0)
        {
            dig += stoi(a);
        }
    }
    if (x > 0)
    {
        if (x == 1)
            answer += "x";
        else
            answer += (to_string(x) + "x");
        if (dig > 0)
        {
            answer += (" + " + to_string(dig));
        }
    }
    else if (x == 0)
    {
        if (dig > 0)
            answer += to_string(dig);
        // else
        //     answer += "0";
    }
    return answer;
}
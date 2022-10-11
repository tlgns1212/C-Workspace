#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string s)
{
    string answer = "";
    vector<int> nums;
    string temp;
    int size;
    stringstream ss(s);
    while (ss >> temp)
    {
        nums.push_back(stoi(temp));
    }
    size = nums.size() - 1;
    sort(nums.begin(), nums.end());
    answer += to_string(nums[0]) + " " + to_string(nums[size]);
    return answer;
}
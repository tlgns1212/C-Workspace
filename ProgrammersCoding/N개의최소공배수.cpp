#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> arr)
{
    int answer = *max_element(arr.begin(), arr.end());
    bool b = false;
    while (!b)
    {
        b = true;
        for (auto a : arr)
        {
            if (answer % a != 0)
            {
                b = false;
                break;
            }
        }
        answer++;
    }
    answer--;
    return answer;
}
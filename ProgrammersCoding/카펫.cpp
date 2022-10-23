#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow)
{
    vector<int> answer;
    int all = brown + yellow;
    for (int i = 3; i < 2000; i++)
    {
        for (int j = 3; i * j <= all; j++)
        {
            if (i * j == all && (i * 2 + j * 2 - 4 == brown))
            {
                answer.push_back(j);
                answer.push_back(i);
                return answer;
            }
        }
    }
    return answer;
}
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total)
{ // i의 범위 때문에 에러났던거, 난 계속 -total부터 시작 했는데, 그러면 안됨
    vector<int> answer;
    int sum = 0;
    for (int i = -1000; i < 1000; i++)
    {
        sum = 0;
        for (int j = 0; j < num; j++)
        {
            sum += (i + j);
        }
        if (sum == total)
        {
            for (int j = 0; j < num; j++)
            {
                answer.push_back(i + j);
            }
            return answer;
        }
    }
    return answer;
}
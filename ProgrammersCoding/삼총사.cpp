#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number)
{
    int answer = 0;
    int size = number.size();
    for (int i = 0; i < size - 2; i++)
    {
        for (int j = i + 1; j < size - 1; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (number[i] + number[j] + number[k] == 0)
                {
                    answer++;
                }
            }
        }
    }
    return answer;
}
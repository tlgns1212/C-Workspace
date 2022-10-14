#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit)
{
    int answer = 0, current = 0, idxF = 0, idxB = people.size() - 1;

    sort(people.begin(), people.end());

    while (idxF <= idxB)
    {
        if (people[idxF] + people[idxB] <= limit)
        {
            idxF++;
            idxB--;
        }
        else
        {
            idxB--;
        }
        answer++;
    }
    return answer;
}
#include <string>
#include <vector>

using namespace std;

long long solution(int n)
{
    long long answer = 0;
    int twoB = 1;
    int oneB = 2;
    if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    for (int i = 2; i < n; i++)
    {
        answer = (twoB + oneB) % 1234567;
        twoB = oneB;
        oneB = answer;
    }
    return answer;
}
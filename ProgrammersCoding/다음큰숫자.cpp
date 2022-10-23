#include <string>
#include <vector>

using namespace std;

int solution(int n)
{
    int answer = 0;
    int now2 = 0, next2 = 0, temp;
    temp = n;
    while (temp != 0)
    {
        if (temp % 2 == 1)
        {
            now2++;
        }
        temp /= 2;
    }
    while (1)
    {
        temp = ++n;
        next2 = 0;
        while (temp != 0)
        {
            if (temp % 2 == 1)
            {
                next2++;
            }
            temp /= 2;
        }
        if (next2 == now2)
        {
            break;
        }
    }
    answer = n;
    return answer;
}
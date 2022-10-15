#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 0, sum = 1;
    ;
    bool left, right;

    while (sum != n)
    {
        answer++;
        sum *= 2;
    }

    while (sum != 0)
    {
        int half = sum / 2;
        left = (a - half <= 0) ? false : true;
        right = (b - half <= 0) ? false : true;
        if (left != right)
        {
            return answer;
        }
        else if (!left)
        {
            sum /= 2;
        }
        else
        {
            sum /= 2;
            a -= sum;
            b -= sum;
        }
        answer--;
    }

    return 1;
}
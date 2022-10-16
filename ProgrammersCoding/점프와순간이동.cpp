#include <iostream>
using namespace std;

int solution(int n)
{
    int ans = 0;
    while (n != 0)
    {
        if (((double)n / 2) != n / 2)
        {
            ans++;
        }
        n /= 2;
    }

    return ans;
}
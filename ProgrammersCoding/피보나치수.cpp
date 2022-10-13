#include <string>
#include <vector>

using namespace std;

int solution(int n)
{
    int answer = 0;
    int F[100001];
    F[0] = 0;
    F[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        F[i] = (F[i - 1] % 1234567) + (F[i - 2] % 1234567);
    }
    answer = F[n] % 1234567;
    return answer;
}
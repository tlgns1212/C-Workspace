#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right)
{
    vector<int> answer;
    answer.reserve(100001);

    for (long long i = left; i < right + 1; i++)
    { // i를 long long이 아니라 int로 해서 지금까지 실패(시간초과) 떴었음
        if (i / n > i % n)
        {
            answer.push_back(i / n + 1);
        }
        else
        {
            answer.push_back(i % n + 1);
        }
    }
    // copy(temp.begin() + left, temp.begin() + right + 1, back_inserter(answer));
    // answer.assign(temp.begin() + left, temp.begin() + right + 1);
    return answer;
}
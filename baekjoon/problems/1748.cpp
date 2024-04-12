#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, answer = 0, sum = 9, currentlySummed = 0, count = 1;
    cin >> N;

    while (1)
    {
        if (currentlySummed + sum < N)
        {
            answer += (count * sum);
            currentlySummed += sum;
            sum *= 10;
            count++;
        }
        else
        {
            answer += (count * (N - currentlySummed));
            break;
        }
    }
    cout << answer;

    return 0;
}
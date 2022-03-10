#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, answer = 5, j = 0;

    cin >> N;

    for (int i = 1; i < N; i++)
    {
        answer += (7 + j);
        j += 3;

        answer %= 45678;
        j %= 45678;
    }

    cout << answer;
}
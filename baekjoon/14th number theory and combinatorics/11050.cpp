#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K, answer = 1;
    cin >> N >> K;
    for (int i = 0; i < K; i++)
    {
        answer *= N - i;
        answer /= i + 1;
    }

    cout << answer;
    return 0;
}
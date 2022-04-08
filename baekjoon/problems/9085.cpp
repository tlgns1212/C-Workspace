#include <iostream>
using namespace std;

int main()
{
    int T, N, answer = 0, temp;

    cin >> T;
    for (int i = 0; i < T; i++)
    {
        answer = 0;
        cin >> N;
        for (int j = 0; j < N; j++)
        {
            cin >> temp;
            answer += temp;
        }
        cout << answer << '\n';
    }
}
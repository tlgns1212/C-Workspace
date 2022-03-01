#include <iostream>
using namespace std;

int main()
{
    int T, N, M;

    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N >> M;

        int answer = 1;
        int r = 1;
        for (int j = M; j > M - N; j--)
        {
            answer *= j;
            answer /= r++;
        }
        cout << answer << '\n';
    }
}
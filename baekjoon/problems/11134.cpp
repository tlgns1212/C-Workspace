#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N, C, answer, divided;

    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N >> C;
        answer = N / C;
        divided = N % C;
        if (divided == 0)
        {
            cout << answer << '\n';
        }
        else
        {
            cout << answer + 1 << '\n';
        }
    }
}
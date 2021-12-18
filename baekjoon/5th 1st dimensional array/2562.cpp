#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, max = 0, answer;
    for (int i = 1; i < 10; i++)
    {
        cin >> N;
        if (max < N)
        {
            max = N;
            answer = i;
        }
    }
    cout << max << '\n'
         << answer;
}
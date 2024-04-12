#include <iostream>
using namespace std;

int N, K, sum;
string s;

void input()
{
    cin >> N >> K >> s;
}

void solution()
{
    for (int i = 0; i < N; i++)
    {
        if (s[i] == 'P')
        {
            for (int j = -K; j <= K; j++)
            {
                if (i + j < 0 || i + j >= N)
                    continue;
                if (s[i + j] == 'H')
                {
                    sum++;
                    s[i + j] = 'E';
                    break;
                }
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    solution();

    cout << sum;
    return 0;
}
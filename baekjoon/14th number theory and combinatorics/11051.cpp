#include <iostream>
using namespace std;

int a[1001][1001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K, answer = 1;

    cin >> N >> K;
    a[0][0] = 1;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0)
            {
                a[i][j] = 1;
            }
            else if (j == i)
            {
                a[i][j] = 1;
            }
            else
            {
                a[i][j] = (a[i - 1][j - 1] + a[i - 1][j]) % 10007;
            }
        }
    }
    cout << a[N][K];

    // int N, K, answer = 1;
    // cin >> N >> K;

    // for (int i = 0; i < K; i++)
    // {
    //     answer *= N - i;
    //     answer /= i + 1;
    //     answer %= 10007;
    //     if (answer == 0)
    //         answer = 1;
    // }

    // cout << answer;
    return 0;
}
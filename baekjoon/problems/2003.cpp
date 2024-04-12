
#include <iostream>
using namespace std;

int N, M, A[10001], answer;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++)
    {
        int sum = 0;
        for (int j = i; j < N; j++)
        {
            sum += A[j];
            if (sum == M)
            {
                answer++;
                break;
            }
        }
    }

    cout << answer;

    return 0;
}

// 4 2
// 1 1 1 1
// 3

// 10 5
// 1 2 3 4 2 5 3 1 1 2
// 3
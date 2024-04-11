#include <iostream>
using namespace std;

int N, K, graph[200001], answers[100001], biggest;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> K;

    for (int i = 0; i < N; i++)
    {
        cin >> graph[i];
    }
    int l = 0, r = 0;
    while (l <= r)
    {
        if (r == N)
            break;
        if (answers[graph[r]] < K)
        {
            answers[graph[r]]++;
            r++;
            if (biggest < r - l)
                biggest = r - l;
        }
        else
        {
            answers[graph[l]]--;
            l++;
        }
    }
    cout << biggest;

    return 0;
}
// 9 2
// 3 2 5 5 6 4 4 5 7

// 7

// 10 1
// 1 2 3 4 5 6 6 7 8 9

// 6
#include <iostream>
using namespace std;

int N, K, graph[201][201];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> K;

    for (int i = 1; i <= N; i++)
    {
        graph[1][i] = 1;
    }
    for (int i = 1; i <= K; i++)
    {
        graph[i][1] = i;
    }
    for (int i = 2; i <= K; i++)
    {
        for (int j = 2; j <= N; j++)
        {
            graph[i][j] = (graph[i][j - 1] + graph[i - 1][j]) % 1000000000;
        }
    }
    cout << graph[K][N];

    return 0;
}
// 1000000000

// 20 2
// 21

// 6 4
// 84
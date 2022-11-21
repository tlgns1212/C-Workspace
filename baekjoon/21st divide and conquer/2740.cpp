#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, K, temp;
    int A[101][101], B[101][101], answer[101][101];

    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> A[i][j];
        }
    }
    cin >> M >> K;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < K; j++)
        {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < K; j++) // N * K 행렬을 만들어야 함
        {
            for (int k = 0; k < M; k++) // 각 구역마다 M번 만큼 반복해야 함
            {
                answer[i][j] += A[i][k] * B[k][j];
            }
            cout << answer[i][j] << ' ';
        }
        cout << '\n';
    }
    // or
    // for (int i = 0; i < N; i++)
    // {
    //     for (int j = 0; j < K; j++)
    //     {
    //         cout << answer[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }

    return 0;
}
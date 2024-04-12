#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 10

int N, M, K;
bool visited[MAX + 2][MAX + 2];
int arr[MAX * MAX];
int saved[MAX][MAX];
int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
int maxNum = 0;

void dfs(int cnt)
{
    if (cnt == K)
    {
        int tempSum = 0;
        cout << "temps = ";
        for (int i = 0; i < K; i++)
        {
            tempSum += arr[i];
            cout << arr[i] << ' ';
        }
        cout << '\n';
        if (tempSum > maxNum)
        {
            cout << "MAX";
            maxNum = tempSum;
        }
    }
    else
    {
        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= M; j++)
            {
                if (!visited[i][j])
                {
                    for (int k = 0; k < 4; k++)
                    {
                        visited[i + dir[k][0]][j + dir[k][1]] = true;
                    }
                    visited[i][j] = true;
                    arr[cnt] = saved[i - 1][j - 1];
                    dfs(cnt + 1);
                    visited[i][j] = false;
                    for (int k = 0; k < 4; k++)
                    {
                        visited[i + dir[k][0]][j + dir[k][1]] = false;
                    }
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

    cin >> N >> M >> K;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> saved[i][j];
        }
    }

    dfs(0);
    cout << maxNum;

    return 0;
}
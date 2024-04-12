#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 9

int N, M;
bool visited[MAX];
int arr[MAX];
int saved[MAX];

void dfs(int cnt, int now)
{
    if (cnt == M)
    {
        for (int i = 0; i < M; i++)
        {
            cout << arr[i] << ' ';
        }
        cout << '\n';
    }
    else
    {
        for (int i = now; i <= N; i++)
        {
            arr[cnt] = saved[i - 1];
            dfs(cnt + 1, i);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> saved[i];
    }
    for (int i = N; i < MAX; i++)
    {
        saved[i] = 100001;
    }
    sort(saved, saved + MAX);

    dfs(0, 1);

    return 0;
}